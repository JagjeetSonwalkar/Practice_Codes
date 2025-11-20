////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                using Abstract keyword (Using Pure Virtual concept in C++)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// NA to create the object of abstract class
abstract class Demo  // abstract class
{
    public int x ;
    public int y ;

    public Demo()
    {
        x = 0 ;
        y = 0 ;
    }

    public int Addition(int iNo1 , int iNo2)             // concrete method
    {
        return iNo1 + iNo2 ;
    }
    public int Sub(int iNo1 , int iNo2)                 // concrete method
    {
        return iNo1 - iNo2 ;
    }

    abstract public int mul(int iNo1 , int iNo2) ;      // abstract method

    abstract public int div(int iNo1 , int iNo2);       // abstract method
}

// The class which is going to extends the abstract class(Demo) , then it the complusory to provide the defination of abstract method
class DemoX extends Demo
{
    public int a ;
    public int b ;

    public DemoX()
    {
        a = 0 ;
        b = 0 ;
    }

    public int mul(int iNo1 , int iNo2)
    {
        return iNo1*iNo2 ;
    }

    public int div(int iNo1 , int iNo2)
    {
        return iNo1/iNo2 ;
    }
}

class Program22
{
    public static void main(String arg[])
    {
        // Demo dobj = new dobj();  // NA beacause Demo class is contain abstract keyword

        DemoX xobj = new DemoX();

        xobj.Addition(11,10);
        xobj.Sub(11,10);
        xobj.mul(2,2);
        xobj.div(2,2);

        System.out.println(xobj.Addition(11,10));
        System.out.println(xobj.Sub(11,10));
        System.out.println(xobj.mul(2,2));
        System.out.println(xobj.div(2,2));

    }
}

/*



*/