package com.Marvellous.marvellousportal.Controller;

import com.Marvellous.marvellousportal.Entity.BatchEntry;
import org.springframework.web.bind.annotation.*;

import java.util.ArrayList;
import java.util.HashMap;

@RestController
@RequestMapping("/batches")
public class BatchEntryController
{
    private HashMap <Long, BatchEntry> batchentries = new HashMap <Long, BatchEntry> ();

    //select * from batches
    @GetMapping
    public ArrayList<BatchEntry> getAll()
    {
        return new ArrayList<>(batchentries.values());
    }

    //insert into batches values(1, 'PPA',28000)
    @PostMapping
    public String createEntry(@RequestBody BatchEntry myentry)
    {
        batchentries.put(myentry.getId(), myentry);
        return "Data Inserted Successfully";
    }

    @PutMapping("/id/{myid}")
    public void updateEntryById(@PathVariable Long myid, @RequestBody BatchEntry myentry)
    {
        myentry.setId(myid);
        batchentries.put(myid, myentry);    // updating entry

    }

    @DeleteMapping("/id/{myid}")
    public void deleteEntryById(@PathVariable Long myid)
    {
        batchentries.remove(myid);
    }

}
