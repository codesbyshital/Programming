class Demo extends Thread
{
    public void run()
    {
        int i = 0;

        try
        {        
        for(i=1; i<=10; i++)
            {
            System.out.println("Inside run method of :"+Thread.currentThread().getName()+" : "+i);
            Thread.sleep(3000);
            }
        }
        catch(Exception eobj)
        {}
    }
}

class MultiThreadingSleep
{
    public static void main(String A[]) throws Exception
    {
        System.out.println("Main Thread is Running.........");

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        dobj1.setName("First");
        dobj2.setName("Second");

        dobj1.start();
        dobj2.start();

        dobj1.join();   // main waits till end.
        dobj2.join();

        System.out.println("End of main thread........");
        
        
        
    }
}