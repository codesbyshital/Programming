package com.marvellous.dependencyinjection;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class Laptop
{
    @Autowired
    public HDD hobj;

    @Autowired
    public RAM robj;

    @GetMapping("Laptop")
    public String LaptopDisplay()
    {
        return hobj.HHDDisplay() + " and " + robj.RAMDisplay();
    }

}
