class Demo extends Thread
{
    public void run()
    {
        System.out.println("Inside run method..");
    }
}

class ThreadScenarioX
{
    public static void main(String A[])
    {
        System.out.println("Main Thread is Running.........");

        Demo dobj = new Demo();

        Thread tobj = new Thread(dobj);

        tobj.start();
        
    }
}