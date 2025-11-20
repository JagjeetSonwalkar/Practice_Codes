////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                object class (java.lang package)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// In java every class is automically inherited from the object class 

/*
object class contains some important methods :

toString() : it is used to convert any kind of object into string format
hashCode() : Addrees of the variable in form of hexa decimal number
equals()   :
finalize() : it is like destructor 
getclass() : returns the name of class , who's object is used as a caller object
clone()    : it is like copy constructor

*/
/*

if the string method is not provided by the programmer then the default toString method gets called
To avoid that we can define your own method and inside that method we write your own logic

*/
/*

class Demo
{
    public int Rno ;
    public String name ;

    public Demo(int A , String B)
    {
        this.Rno = A ;
        this.name = B ;
    }
}

class Program29
{
    public static void main(String A[])
    {
        Demo dobj = new Demo(101,"Sky");

        System.out.println(dobj);       // O/P : Demo@5caf905d
    }
}

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

    public String toString()
    {
        return Rno+" "+name ;
    }
}

class Program29
{
    public static void main(String A[])
    {
        Demo dobj = new Demo(101,"Sky");

        System.out.println(dobj);       // 101 Sky
    }
}



