////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Multi Threading : By implementing the runnable interface
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running");
    }
}

class Program35
{
    public static void main(String arg[])
    {
        System.out.println("Inside main thread");

        Demo dobj = new Demo();
        Thread tobj = new Thread(dobj);

        tobj.start();
    }
}

/*

Inside main thread
Thread is running

*/