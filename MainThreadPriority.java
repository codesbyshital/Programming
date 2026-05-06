class MainThreadPriority
{
    public static void main(String A[])
    {
        System.out.println("Inside Main Method...");

        Thread dobj = Thread.currentThread();

        String Name  = dobj.getName();

        System.out.println("Name of current Thread: "+Name);

        System.out.println("Pririty of Thread : "+dobj.getPriority());
        
    }
}