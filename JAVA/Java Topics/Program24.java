////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Interface (Non primitive Datatype)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


// NA
/* 
abstract class Demo1
{
   abstract  public void fun() ;

   public void run()
   {
        System.out.println("Inside Run()");
   }
}

abstract class Demo2
{
    abstract public void gun() ;
}

class DemoX extends Demo1 , Demo2
{
    public void fun()
    {
        System.out.println("inside fun()");
    }

    public void gun()
    {
        System.out.println("inside gun()");
    } 
}
*/
interface Dog
{
    public void DogSound() ;
}

interface kingfesher
{
    public void kingfesherSound();
}

class Animals implements Dog , kingfesher
{
    public void DogSound()
    {
        System.out.println("DOG Sound : bhaun-bhaun");
    }

    public void kingfesherSound()
    {
        System.out.println("kingfesher Sound : hatter-chatter");
    }
}


class Program24
{
    public static void main(String arg[])
    {
        Animals aobj = new Animals();

        aobj.DogSound();
        aobj.kingfesherSound();

    }
}

/*

Tax rate is : 30
Interest Rate of SBI is : 8.2
Interest Rate of BOM is : 7.5

*/