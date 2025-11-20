////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////       Run time polymorphism (Late Binding) (Run time method dispatch)     
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo
{
    public int iNo1 ;
    public int iNo2 ;

    public Demo()
    {
        iNo1 = 0 ;
        iNo2 = 0 ;
    }

    public void fun()
    {
        System.out.println("Inside Demo class fun()");
    }

    public void sun()
    {
        System.out.println("Inside Demo class sun()");
    }

    public void bun()
    {
        System.out.println("Inside Demo class bun()");
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
        iX = 0 ;
        iY = 0 ;
    }

    public void fun()
    {
        System.out.println("Inside DemoX class fun()");
    }

    public void sun()
    {
        System.out.println("Inside DemoX class sun()");
    }

    public void bun()
    {
        System.out.println("Inside DemoX class bun()");
    }

    public void run()
    {
        System.out.println("Inside DemoX class run()");
    }
}



class Program12
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();      // no casting
        DemoX xobj = new DemoX();    // no casting

//      variable      object
        Demo upobj = new DemoX();    // up casting
//      object of DemoX is referenced by a Demo type variable

        // DemoX dcobj = new Demo(); // down casting   // NA 

        upobj.fun();
        upobj.sun();
        upobj.bun();
        upobj.gun();
        // upobj.run();     // ERROR
    }
}

/*

Inside DemoX class fun()
Inside DemoX class sun()
Inside DemoX class bun()
Inside Demo class gun()

*/

/*
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

->Object Creation:

Demo dobj = new Demo();    This creates an object dobj of type Demo.
DemoX xobj = new DemoX();  This creates an object xobj of type DemoX.

Demo upobj = new DemoX();  This demonstrates upcasting, where an object of DemoX is referenced by a Demo type variable. 
Upcasting is allowed because DemoX is a subclass of Demo.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

->Upcasting:

In the line Demo upobj = new DemoX();, the object of type DemoX is assigned to a reference variable of type Demo. 
This is known as upcasting, and it's safe because DemoX is a subclass of Demo. The object is still of type DemoX, 
so it retains all the fields and methods of DemoX but is being referred to by a Demo type reference.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

->Method Calls:

The following methods are called on the upobj reference:
upobj.fun(); This invokes the fun() method. Even though upobj is of type Demo, at runtime it refers to a DemoX object. Since fun() is overridden in DemoX, the DemoX version of fun() is executed. 
Output: Inside DemoX class fun().

upobj.sun(); Similarly, the sun() method is overridden in DemoX, so the DemoX version of sun() is called. 
Output: Inside DemoX class sun().

upobj.bun(); This calls the overridden bun() method in DemoX. 
Output: Inside DemoX class bun().

upobj.gun(); The gun() method is not overridden in DemoX, so the gun() method from the Demo class is called. 
Output: Inside Demo class gun().

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

->Error:

upobj.run();: This line will result in an error because the run() method is not defined in the Demo class (it is specific to DemoX). The reference type is Demo, which does not have the run() method, so this causes a compilation error.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


->Run-time Polymorphism (Late Binding):

The method calls fun(), sun(), and bun() are resolved at runtime. Even though the reference variable upobj is of type Demo, it actually points to an object of type DemoX. Therefore, the overridden methods in DemoX are called at runtime, which is an example of late binding or dynamic method dispatch.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

->Upcasting:

The variable upobj is a reference of type Demo, but it points to an object of type DemoX through upcasting. The reference type determines which methods can be called, but at runtime, Java will use the actual object's class (DemoX) to resolve method calls, leading to dynamic behavior.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

->Method Overriding:

In DemoX, the methods fun(), sun(), and bun() override those in Demo. This allows DemoX to provide its own implementation of these methods, which is used when the method is called on an object of DemoX (even if the reference type is Demo).

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

->Downcasting (commented out):

The line DemoX dcobj = new Demo(); is downcasting and would cause an error because you cannot cast a superclass reference (Demo) to a subclass reference (DemoX) unless the object is actually an instance of DemoX. This is why the line is commented out.

*/