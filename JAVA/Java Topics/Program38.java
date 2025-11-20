////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Multi Threading 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

class Program38
{
    public static void main(String arg[])
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

        System.out.println("End of main thread : "+ Thread.currentThread().getName()); 
    }
}

/*

Inside main thread : main
End of main thread : main
Thread is running with the name : blue
Thread is running with the name : sky
sky with ID : 0
blue with ID : 0
blue with ID : 1
sky with ID : 1
sky with ID : 2
blue with ID : 2
sky with ID : 3
blue with ID : 3
sky with ID : 4
blue with ID : 4
sky with ID : 5
blue with ID : 5

*/