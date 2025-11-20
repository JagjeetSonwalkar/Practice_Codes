////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                object class (java.lang package)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// In java every class is automically inherited from the object class 

/*
object class contains some important methods :

toString() :
hashCode() : Addrees of the variable in form of hexa decimal number
equals()   :
finalize() : it is like destructor 
getclass() : returns the name of class , who's object is used as a caller object
clone()    : it is like copy constructor

*/

import java.util.*;

// implements clonable is complousary
class Demo implements Cloneable
{
    int iRno ;
    String name ;

    public Demo(int A , String B)
    {
        this.iRno = A ;
        this.name = B ;
    }

//Access_specifier Object clone_method 
    public         Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}

class Program28
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo(21,"Ant");
        try
        {
//          class_name object_name(any) = (class_name)object_name_that_we_want_to_copy . clone_method ;
            Demo       cobj             = (Demo)      dobj                             . clone();

            System.out.println("Name :"+ dobj.iRno);
            System.out.println("Roll no :"+ dobj.name);

            System.out.println("Name :"+ cobj.iRno);
            System.out.println("Roll no :"+ cobj.name);
        }

        catch(CloneNotSupportedException ccobj)
        {
            System.out.println("Execption occured : "+ ccobj);
        }      
    }
}

/*

Name :21
Roll no :Ant
Name :21
Roll no :Ant

*/

/*
what is Shallow Copy & Deep Copy ?

*/