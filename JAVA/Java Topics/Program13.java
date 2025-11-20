////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                     final charactersitcs , behaviour , class
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo
{
    public int iNo1 ;
    public int iNo2 ;
    public final int iNo3 ;
    public final int iNo4 ;

    public Demo()
    {
        iNo1 = 5 ;
        iNo2 = 8 ;
        iNo3 = 10 ;
        iNo4 = 20 ;
    }

    final public void run() // we cannot override this method
    {
        System.out.println("Inside run()");
    }

    public void fun()
    {
        iNo1++ ;
        iNo2++ ;
        // iNo3++ ; // ERROR : cannot assign a value to final variable iNo3
        // iNo4++ ; // ERROR : cannot assign a value to final variable iNo4
    }

    public void display()
    {
        System.out.println(iNo1) ;
        System.out.println(iNo2) ;
        System.out.println(iNo3) ;
        System.out.println(iNo4) ;
    }
}
 
final class Demof   // we cannot Inherite this class , but we can create the object of this class
{
    public int A ;
    public int B ;

    public void gun()
    {
        System.out.println("Inside gun()");
    }
}

class Program13
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();

        Demof fobj = new Demof();

        dobj.fun();
        dobj.display();
    }
}

/*


*/