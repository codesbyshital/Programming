package com.marvellous.dependencyinjection;

import org.springframework.stereotype.Component;

@Component     // to avoid Error of bean
public class HDD
{
    public String HHDDisplay()
    {
        return ("HardDisk is of 512 GB");
    }
}

