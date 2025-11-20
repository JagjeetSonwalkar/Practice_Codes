import java.util.*;

class C2_hashT
{
    public static void main(String[] arg)
    {
        Hashtable <Integer,String> name = new Hashtable<>();

        // it is like add method.
        name.put(1,"Jack");
        name.put(3,"Rahul");
        name.put(4,"Rohit");
        name.put(2,"Virat");
        name.put(11,"hard");

        System.out.println(name);
        //////////////////////////////////////////////////////////////////////////////////////////////////////////////

        Hashtable <Integer,String> name11 = new Hashtable<>(name);

        name11.put(4,"Sky");        // it will work like update
        name11.put(5,"out");
        name11.put(6,"Toss");

        System.out.println(name11);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////

        name11.remove(1);
        name11.remove(5);
        name11.remove(4);

        System.out.println(name11);

        /////////////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println("size of name11 is : "+name11.size());

        /////////////////////////////////////////////////////////////////////////////////////////////////////////

        Collection <String> valuesOf_name11 = name11.values();

        System.out.println("using .values() : "+valuesOf_name11);

        ////////////////////////////////////////////////////////////////////////////////////////////////////////

        System.out.println("using .toString() : "+ name11.toString());


        ///////////////////////////////////////////////////////////////////////////////////////////////////////////

        /*

        System.out.println(name11);
            This prints the object name11.
            Java automatically calls the object's .toString() method behind the scenes.
            It's short and clean.
            ✅ Best when you just want to print the object.

        System.out.println("using .toString() : " + name11.toString());
            This is explicitly calling .toString().
            The + operator forces Java to:
            Convert the left side ("using .toString() : ") and right side (name11.toString()) to strings.
            Then concatenate them.
            ✅ Useful when you want to add a label or explanation in your output.

        */

       /////////////////////////////////////////////////////////////////////////////////////////////////////////////
        name11.clear();
       System.out.println(name11);
    }
}