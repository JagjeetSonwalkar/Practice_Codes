////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////        Wrapper classes
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program5
{
    public static void main(String arg[])
    {
        // Every wrapper class internally conatent's the actual primitive datatype in it

        int a = 10 ;        // Primitive datatype

        Integer b = 20 ;    // Wrapper class

        Integer x = a ;     // Auto Boxing

        int y = b ;         // Auto UnBoxing


        System.out.println(a);
        System.out.println(b);
        System.out.println(x);
        System.out.println(y);

/*
        Primitive data types    <->    Wrapper class
        
        boolean                         Boolean
        byte                            Byte
        char                            Character
        short                           Short
        int                             Integer
        float                           Float
        double                          Double
        long                            Long
*/

    }
}

/*

10
20
10
20

*/