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
    public float Area(float Radius)
    {
        return Circle.PI * Radius * Radius;
    }

    public float Circumference(float Radius)
    {
        return 2 * Circle.PI * Radius;
    }  

}


class DemoInterfaceMethodX
{
    public static void main(String A[])
    {
        // Circle cobj = new Circle();   // not allowed as this is bydefault abstract.
        Marvellous  mobj = new Marvellous();
        float ret = 0.0f;

       ret = mobj.Area(10.5f);       
       System.out.println("Areas is  : "+ret);

       ret = mobj.Circumference(10.5f);
       System.out.println("Circumference is  : "+ret);

        
    }
}