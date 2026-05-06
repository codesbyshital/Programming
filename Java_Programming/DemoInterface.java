interface Circle
{
    //characteristics
    float PI = 3.14f;   //public static final


}


class DemoInterface
{
    public static void main(String A[])
    {
        System.out.println(Circle.PI);
        Circle.PI = 7.24f;  // Error due to static final

    }
}