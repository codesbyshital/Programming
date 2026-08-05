package com.marvellous.dependencyinjection;

import org.springframework.stereotype.Component;

@Component              // to avoid Error of bean
public class RAM
{
    public String RAMDisplay()
    {
        return ("RAM is of 8 GB");
    }
}
