package com.marvellous.MarvellousPortal.Entity;

import lombok.Getter;
import lombok.Setter;
import org.bson.types.ObjectId;
import org.springframework.data.mongodb.core.mapping.Document;

@Document(collection = "BatchDetails")
@Getter
@Setter

public class BatchEntry
{
    private String id;
    private String name;
    private int fees;
}
