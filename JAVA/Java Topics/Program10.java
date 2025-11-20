////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////        Inheritance  : Reuseability of a class (Hierachical Inheritance)
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

    protected void gun()
    {
        System.out.println("Inside Demo class gun()");
    }

    private void sun()
    {
        System.out.println("Inside Demo class sun()");
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

    protected void bun()
    {
        System.out.println("Inside DemoX class bun()");
    }
}

class Mul extends Demo
{
    public int iM1 ;
    public int iM2 ;

    public Mul()
    {
        iM1 = 1 ;
        iM2 = 2 ;
    }

    public void mun()
    {
        System.out.println("Inside Mul class mun()");
    }
}

class Program10
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();     // object of Demo class
        DemoX xobj = new DemoX();   // object of DemoX class
        Mul mobj = new Mul();       // object of Mul class

        // dobj.mun();
        // dobj.run();
        // dobj.bun();
        dobj.fun();
        dobj.gun();
        // dobj.sun(); 

        // xobj.mun();
        xobj.run();
        xobj.bun();
        xobj.fun();
        xobj.gun();
        // xobj.sun(); 

        mobj.mun();
        // mobj.run();
        // mobj.bun();
        mobj.fun();
        mobj.gun();
        // mobj.sun();         
    }
}

/*

Inside Demo class fun()
Inside Demo class gun()
Inside DemoX class run()
Inside DemoX class bun()
Inside Demo class fun()
Inside Demo class gun()
Inside Mul class mun()
Inside Demo class fun()
Inside Demo class gun()

*/