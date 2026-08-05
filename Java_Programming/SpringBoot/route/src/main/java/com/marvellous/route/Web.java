package com.marvellous.route;

import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController   //class becomes class which controls rest API
public class Web
{
    @GetMapping("Web")
    public String WebDisplay()
    {
        return "Inside Web Developement";
    }
}
