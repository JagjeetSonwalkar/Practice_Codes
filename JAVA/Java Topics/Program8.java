////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////        Inheritance  : Reuseability of a class (Single level Inheritance)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo
{
    public int iNo1 ;
    public int iNo2 ;

    public Demo()
    {
        iNo1 = 20 ;
        iNo2 = 30 ;
    }

    public void fun()
    {
        System.out.println("Inside Demo class fun()");
    }

    public void gun()
    {
        System.out.println("Inside Demo class gun()");
    }
}

class DemoX extends Demo
{
    public int iX ;
    public int iY ;

    public DemoX()
    {
        iX = 10 ;
        iY = 11 ;
    }

    public void run()
    {
        System.out.println("Inside DemoX class run()");
    }
}

class Program8
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();     // object of Demo class
        DemoX xobj = new DemoX();   // object of DemoX class

        xobj.run();
        xobj.fun();
        xobj.gun();
    }
}

/*

Inside DemoX class run()
Inside Demo class fun()
Inside Demo class gun()

*/