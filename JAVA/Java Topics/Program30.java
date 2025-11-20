////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                object class (java.lang package)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// In java every class is automically inherited from the object class 

/*
object class contains some important methods :

toString() : it is used to convert any kind of object into string format
hashCode() : Addrees of the variable in form of hexa decimal number
equals()   : it is used to compare the 2 content's of String or any object
finalize() : it is like destructor 
getclass() : returns the name of class , who's object is used as a caller object
clone()    : it is like copy constructor
*/

class Demo
{
    public int Rno ;
    public String name ;

    public Demo(int A , String B)
    {
        this.Rno = A ;
        this.name = B ;
    }

    public void fun()
    {
        System.out.println("Inside fun");
    }
}

class DemoX
{
    public int Rno ;
    public int age ;

    public DemoX(int A , int B)
    {
        this.Rno = A ;
        this.age = B ;
    }

    public void gun()
    {
        System.out.println("Inside gun");
    }
}

class Program30
{
    public static void main(String A[])
    {
        Demo dobj = new Demo(101,"Jaggi");
        DemoX xobj = new DemoX(501,18);

        if(dobj.equals(xobj))
        {
            System.out.println("Both are equal");
        }
        else
        {
            System.out.println("Both are not equal");   
        }

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        String s1 = "sky" ;
        String s2 = new String("Sky");

        if(s1 == s2)
        {
            System.out.println("Both are equal");
        }
        else
        {
            System.out.println("Both are not equal");   
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        String a1 = "time" ;
        String a2 = new String("time");

        if(a1.equals(a2))
        {
            System.out.println("Both are equal");
        }
        else
        {
            System.out.println("Both are not equal");   
        }

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    }
}

/*
Both are not equal
Both are not equal
Both are equal
*/