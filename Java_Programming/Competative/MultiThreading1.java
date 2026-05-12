class Demo extends Thread
{
    public void run()
    {
        System.out.println("Inside run method..");
    }
}

class MultiThreading1
{
    public static void main(String A[])
    {
        System.out.println("Main Thread is Running.........");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.start();
        dobj2.start();
        
        
    }
}