interface Circle
{
    //characteristics (public static final)
    float PI = 3.14f;   

    //Behaviours   (bydefault public abstract)
    float Area(float Radius);             
    float Circumference(float Radius);    


}

class Marvellous implements Circle
{
    //Error due to missing ody of area & circumference : 
    // Marvellous is not abstract and does not override abstract method Circumference(float) in Circle
}


class DemoInterfaceMethod
{
    public static void main(String A[])
    {
       Marvellous  mobj = new Marvellous();

        
    }
}