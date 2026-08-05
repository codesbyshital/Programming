package com.marvellous.route;


















import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class DataScience
{
    @GetMapping("DataScience")
    public String DataScienceDislay()
    {
        return "Data Science...";
    }
}











