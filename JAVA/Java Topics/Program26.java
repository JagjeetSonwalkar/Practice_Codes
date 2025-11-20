////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                object class (java.lang package)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// In java every class is automically inherited from the object class 

/*
object class contains some important methods :

toString() :
hashCode() : Addrees of the variable in form of hexa decimal number
equals()   :
finalize() : 
getclass() : returns the name of class , who's object is used as a caller object
clone()    :

*/

class Demo1
{
    public int a ;

    public void Fun()
    {
        System.out.println("Inside the fun()");
    }
}

class Demo2 extends Demo1
{
    public int b ;

    public void Fun()
    {
        System.out.println("Inside the fun()");
    }
}

class Program26
{
    public static void main(String arg[])
    {
        Demo1 dobj = new Demo1();
        Demo2 ddobj = new Demo2();

        System.out.println(dobj.getClass());    // class Demo1
        System.out.println(ddobj.getClass());   // class Demo2

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        String name = "Sky_is_blue";
        String sun = "orange";
        String sky = "blue";

        System.out.println(name.hashCode());    // 2111103249
        System.out.println(sun.hashCode());     // -1008851410
        System.out.println(sky.hashCode());     // 3027034

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    }
}

/*

class Demo1
class Demo2
2111103249
-1008851410
3027034

*/