class Overloading
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();
        System.out.println(dobj.Addition(10,11));
        System.out.println(dobj.Addition(10.89, 20.45));
        System.out.println(dobj.Addition(10.0f,20.9f,30.5f));

    }
}


class Demo
{
    public int Addition(int a, int b)   //Addition@2ii
    {
        return a+b;
    }
    
    public double Addition(double a, double b)   //Addition@2dd
    {
        return a+b;
    }

    public float Addition(float a, float b, float c)   //Addition@3fff
    {
        return a+b+c;
    }

}