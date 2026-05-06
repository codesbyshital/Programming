class Demo extends Thread
{
    public void run()
    {
        int i = 0;

        for(i=1; i<=100; i++)
        {
        System.out.println("Inside run method of :"+Thread.currentThread().getName()+" : "+i);
        }
    }
}

class MultiThreadingLoop
{
    public static void main(String A[])
    {
        System.out.println("Main Thread is Running.........");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.setName("First");
        dobj2.setName("Second");

        dobj1.start();
        dobj2.start();
        
        
    }
}