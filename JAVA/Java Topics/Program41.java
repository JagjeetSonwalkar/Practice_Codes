////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////                Command Line Argument
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Program41
{
    public static void main(String Arg[])
    {
        System.out.println("Number of command line arguments are : "+ Arg.length);

        for(int i = 0 ; i < Arg.length ; i++)
        {
            System.out.println(Arg[i]);
        }
    }
}

/*

C:\Users\DELL\OneDrive\Desktop\Java>javac Program41.java

C:\Users\DELL\OneDrive\Desktop\Java>java Program41
Number of command line arguments are : 0

C:\Users\DELL\OneDrive\Desktop\Java>java Program41 hello
Number of command line arguments are : 1
hello

C:\Users\DELL\OneDrive\Desktop\Java>java Program41 hello 21
Number of command line arguments are : 2
hello
21

C:\Users\DELL\OneDrive\Desktop\Java>java Program41 hello 21 jaggi
Number of command line arguments are : 3
hello
21
jaggi

C:\Users\DELL\OneDrive\Desktop\Java>java Program41 hello 21 jaggi kite fun
Number of command line arguments are : 5
hello
21
jaggi
kite
fun

*/