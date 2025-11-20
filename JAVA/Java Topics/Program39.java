////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Multi Threading 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* Method by Thread class

run() : this method contain the logic which has to executed by the thread , 
        It is call_back method means a programmer we are defining the method but the method is called by the JVM

start() : when we call this method your thread goes into runable state (ready to run)

setName() : By using this method we can assigne a user defined name to your thread

getName() : By using this method we can fetch the name of exesting Thread

currentThread() : currentThread is method which gives the refrence of currently executing thread

sleep() : By calling this method your thread goes into the sleeping state (we have to pass the paramter as a Time in mile_Second)

join() : This method is used to achieve thread synchronization

*/

class Demo extends Thread
{
    public void run()
    {
        int iCnt = 0 ;

        System.out.println("Thread is running with the name : " + Thread.currentThread().getName());

        try
        {
            for(iCnt = 0 ; iCnt < 6 ; iCnt++ )
            {
                System.out.println(Thread.currentThread().getName() + " with ID : " + iCnt);
                Thread.sleep(1000);
            }
        }
        catch(InterruptedException iobj)
        {
            System.out.println(iobj);
        }     
    }
}

class Program39
{
    public static void main(String arg[]) throws InterruptedException
    {
        System.out.println("Inside main thread : "+ Thread.currentThread().getName());

        Demo dobj1 = new Demo();
        Demo dobj2 = new Demo();

        Thread tobj1 = new Thread(dobj1);
        Thread tobj2 = new Thread(dobj2);

        tobj1.setName("sky");
        tobj2.setName("blue");

        tobj1.start();
        tobj2.start();  

        tobj1.join();
        tobj2.join();

        System.out.println("End of main thread : "+ Thread.currentThread().getName()); 
    }
}

/*

Inside main thread : main
Thread is running with the name : sky
Thread is running with the name : blue
blue with ID : 0
sky with ID : 0
sky with ID : 1
blue with ID : 1
blue with ID : 2
sky with ID : 2
blue with ID : 3
sky with ID : 3
blue with ID : 4
sky with ID : 4
blue with ID : 5
sky with ID : 5
End of main thread : main

*/

/*
Example of join method : 
/////////////////////////   Without join method     //////////////////////
start of main , Thread name is : main                     <-
End of main , Thread name is : main                       <-
Thread is running with name : P min
Thread priopity is : 1
/////////////////////////   With join method     //////////////////////
start of main , Thread name is : main                   <-
Thread is running with name : P min                     <-
Thread priopity is : 1
End of main , Thread name is : main

*/