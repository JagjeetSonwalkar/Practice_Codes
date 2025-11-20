////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Multi Threading : By extending the thread class
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo extends Thread
{
    public void run()
    {
        System.out.println("Inside run thread : " + Thread.currentThread().getName());
    }
}

class Program36
{
    public static void main(String arg[])
    {
        System.out.println("Inside main thread : "+ Thread.currentThread().getName());

        Demo dobj = new Demo();

        Thread tobj = new Thread(dobj);

        tobj.setName("sky");

        tobj.start();
        
    }
}
/*

Inside main thread : main
Inside run thread : sky

*/