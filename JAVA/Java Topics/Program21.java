////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                   throws 
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
NOTE :

throws is used in the method signature to declare that a method might throw an exception.
throw is used within a method to actually throw an exception.

*/
/*

import java.io.*;

class Program21
{
    public static void main(String arg[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name : ");
        String name = bobj.readLine();

        System.out.println("Enter your age : ");
        int Age = Integer.parseInt(bobj.readLine());

        System.out.println("Your name : "+name);
        System.out.println("Your age : "+Age);
    }
}

Error: Could not find or load main class Program21
Caused by: java.lang.ClassNotFoundException: Program21

*/
import java.io.*;

class Program21
{
    public static void main(String arg[]) throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter your name : ");
        String name = bobj.readLine();

        System.out.println("Enter your age : ");
        int Age = Integer.parseInt(bobj.readLine());

        System.out.println("Your name : "+name);
        System.out.println("Your age : "+Age);
    }
}

/*

Enter your name :
jaggi
Enter your age :
18
Your name : jaggi
Your age : 18

*/