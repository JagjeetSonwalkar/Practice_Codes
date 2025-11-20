////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////        Compile time polymorphism (Early Binding) (Method Overloading)
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

    public int Addition(int iNo1 , int iNo2)        // Addition@2ii
    {
        return iNo1 + iNo2 ;
    }

    public float Addition(float iNo1 , float iNo2)  // Addition@2ff
    {
        return iNo1 + iNo2 ;
    }

    public int Addition(int iNo1 , int iNo2 , int iNo3) // Addition@3ii
    {
        return iNo1 + iNo2 + iNo3 ;
    }

    public float Addition(int iNo1 , float iNo2)  // Addition@2if
    {
        return iNo1 + (int)iNo2 ;
    }

    public float Addition(float iNo1 , int iNo2)  // Addition@2fi
    {
        return iNo1 + iNo2 ;
    }
}



class Program11
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();

        dobj.Addition(10,1.5f); // Addition@2if
        dobj.Addition(10,10);   // Addition@2ii
        dobj.Addition(1,1,2);   // Addition@3ii
        dobj.Addition(1.5f,12); // Addition@2fi
        dobj.Addition(1,1.2f);  // Addition@2if

        dobj.Addition(1.5f,1.5f); // Addition@2ff
        dobj.Addition(1,3,2);     // Addition@3ii
        dobj.Addition(1.5f,10);   // Addition@2fi
    }
}

/*


*/