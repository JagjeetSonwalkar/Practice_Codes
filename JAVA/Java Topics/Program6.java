////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////        Accepting input from user : Non Buffered input (Scanner class)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// it is a Inbuilt package (which contains the collections framework)
import java.util.* ;

class Program6
{
    public static void main(String arg[])
    {
        boolean wicket = false ;
        byte bb = 0 ;
        char BG = '\0' ;
        int rate = 0 ;
        short run = 0 ;
        float salary = 0.0f ;
        double tax = 0.0d ;
        long ph = 0L ;
        String name = null ;

        // scanner class , sobj object of scanner class , System.in indicate standard input device i.e, keyboard
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the wicket conformation :");
        wicket = sobj.nextBoolean();  // method for boolean is .nextBoolean()

        if(wicket == true)
        {
            System.out.println("Out");
        }
        else
        {
            System.out.println("NOT Out");
        }

        System.out.println("Enter the byte that you want to featch :");
        bb = sobj.nextByte();   // method for byte is .nextByte()

        System.out.println("Enter the Blood Group :");
        BG = sobj.next().charAt(0);     // method for char is .next().charAt()

        System.out.println("Enter the rate of tshirt :");
        rate = sobj.nextInt();  // method for int is .nextInteger()

        System.out.println("Enter the run he hit on this ball :");
        run = sobj.nextShort();  // method for short is .nextShort()

        System.out.println("Enter the salary :");
        salary = sobj.nextFloat();

        System.out.println("Enter the tax you paid :");
        tax = sobj.nextDouble();

        System.out.println("Enter your phone number :");
        ph = sobj.nextLong();

        sobj.nextLine();    // fix the issue with nextLine() skipping input

        System.out.println("Enter your name :");
        name = sobj.nextLine();

        System.out.println("byte fetches :"+bb);
        System.out.println("Blood Group is :"+BG);
        System.out.println("Tshirt price is :"+rate);
        System.out.println("for this hit the run is :"+run);
        System.out.println("Salary is :"+salary);
        System.out.println("tax is :"+tax);
        System.out.println("phone no is:"+ph);
        System.out.println("your name is :"+name);
/*
        data types     <->    methods from the scanner class
        
        boolean                         .nextBoolean()
        byte                            .nextByte()
        char                            .next().CharAt(0)
        short                           .nextShort()
        int                             .nextInt()
        float                           .nextFloat()
        double                          .nextDouble()
        long                            .nextLong()
        String                          .nextLine()
*/
    }
}

/*

Enter the wicket conformation :
true
Out
Enter the byte that you want to featch :
3
Enter the Blood Group :
A
Enter the rate of tshirt :
499
Enter the run he hit on this ball :
6
Enter the salary :
500000
Enter the tax you paid :
12000.9898
Enter your phone number :
1230984857
Enter your name :
sky
byte fetches :3
Blood Group is :A
Tshirt price is :499
for this hit the run is :6
Salary is :500000.0
tax is :12000.9898
phone no is:1230984857
your name is :sky

*/