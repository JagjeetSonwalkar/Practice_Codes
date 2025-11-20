////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Multi Threading : priority
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo extends Thread
{
    public void run()
    {
        System.out.println("Thread is running with name : "+ Thread.currentThread().getName());
        System.out.println("Thread priopity is : "+ Thread.currentThread().getPriority());
    }
}

class Program40
{
    public static void main(String arr[]) throws  InterruptedException
    {
        System.out.println("start of main , Thread name is : "+ Thread.currentThread().getName());

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();
        Demo dobj3 = new Demo();

        Thread tobj1 = new Thread(dobj1);       
        Thread tobj2 = new Thread(dobj2);     
        Thread tobj3 = new Thread(dobj3);

        tobj1.setName("P min");
        tobj2.setName("P Avg");
        tobj3.setName("P max");

        tobj1.setPriority(Thread.MIN_PRIORITY);     // tobj1.setPriority(1); 
        tobj2.setPriority(Thread.NORM_PRIORITY);       //  tobj2.setPriority(5);
        tobj3.setPriority(Thread.MAX_PRIORITY);    // tobj3.setPriority(10);

        tobj1.start();
        tobj2.start();
        tobj3.start();

        tobj1.join();
        tobj2.join();
        tobj3.join();

        System.out.println("End of main , Thread name is : "+ Thread.currentThread().getName());
    }
}

/*

javac Program40.java

C:\Users\DELL\OneDrive\Desktop\Java>java Program40
start of main , Thread name is : main
Thread is running with name : P Avg
Thread is running with name : P min
Thread is running with name : P max
Thread priopity is : 10
Thread priopity is : 1
Thread priopity is : 5
End of main , Thread name is : main

C:\Users\DELL\OneDrive\Desktop\Java>java Program40
start of main , Thread name is : main
Thread is running with name : P max
Thread is running with name : P Avg
Thread priopity is : 10
Thread priopity is : 5
Thread is running with name : P min
Thread priopity is : 1
End of main , Thread name is : main

C:\Users\DELL\OneDrive\Desktop\Java>java Program40
start of main , Thread name is : main
Thread is running with name : P Avg
Thread is running with name : P min
Thread is running with name : P max
Thread priopity is : 10
Thread priopity is : 5
Thread priopity is : 1
End of main , Thread name is : main

*/