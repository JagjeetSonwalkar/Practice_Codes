////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////        Accepting input from user : Buffered input (BufferReader class)
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.io.*;

class Program7
{
    public static void main(String arg[]) throws IOException
    {
        int age = 0 ;
        float salary = 0.0f ;
        String name = null ;

        String sBG = null ;
        char bg = '\0';

        double rate = 0.0d;
        short run = 0 ;
        long ph = 0L ;
        byte featch = 0 ;
        boolean bb = false ;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter the name : ");
        name = bobj.readLine();

        System.out.println("Enter the age : ");
        age = Integer.parseInt(bobj.readLine());

        System.out.println("Enter the salary : ");
        salary = Float.parseFloat(bobj.readLine());

        System.out.println("Enter the Blood Group : ");
        sBG = bobj.readLine();
        bg = sBG.charAt(0);

        System.out.println("Enter the rate of shirt : ");
        rate = Double.parseDouble(bobj.readLine());

        System.out.println("Enter the run on this ball :");
        run = Short.parseShort(bobj.readLine());

        System.out.println("Enter the Phone number :");
        ph = Long.parseLong(bobj.readLine());

        System.out.println("How many run you can fetch from one over : ");
        featch = Byte.parseByte(bobj.readLine());

        System.out.println("Enter the condition in true or false , sun is shining or not !");
        bb = Boolean.parseBoolean(bobj.readLine());

        System.out.println("Name is : "+name);
        System.out.println("Age is : "+age);
        System.out.println("salary is : "+salary);
        System.out.println("Blood Group is : "+bg);
        System.out.println("rate of shirt is : "+rate);
        System.out.println("run on this ball is : "+run);
        System.out.println("PH no.  is : "+ph);
        System.out.println("featched run in 6 balls are :"+featch);

        if(bb = true)
        {
            System.out.println("sun is shining");
        }
        else
        {
            System.out.println("sun is not shining !");
        }
    }
}

/*

Enter the name :
sky
Enter the age :
18
Enter the salary :
125478.214
Enter the Blood Group :
A+
Enter the rate of shirt :
2525.9999
Enter the run on this ball :
6
Enter the Phone number :
8521479636
How many run you can fetch from one over :
19
Enter the condition in true or false , sun is shining or not !
true
Name is : sky
Age is : 18
salary is : 125478.21
Blood Group is : A
rate of shirt is : 2525.9999
run on this ball is : 6
PH no.  is : 8521479636
featched run in 6 balls are :19
sun is shining

*/