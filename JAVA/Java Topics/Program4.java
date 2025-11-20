////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////        Special function (Constructor) , Encapsulation , object creation
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Demo
{
    // characterstic's
    public int iNo1 ;   // characterstic
    public int iNo2 ;   // characterstic

    // Constructor's
    public Demo()       // default constructor
    {
        iNo1 = 10 ;
        iNo2 = 20 ;
    }

    public Demo(int A , int B)  // Parametrised constructor
    {
        iNo1 = A ;
        iNo2 = B ;
    }

    public void display()   // behaveiour
    {
        System.out.println("Jay Ganesh..");
    }
}

class Program4
{
    public static void main(String arg[])
    {
        // object creation (As java is complete dynamic PL to allocate the memory for an object , we have to use only dynamic memory allocation technique)
        // we can use 'new' keyword to allocate the dynamic memory
        Demo dobj = new Demo();         
        Demo pobj = new Demo(10,20);
    }
}