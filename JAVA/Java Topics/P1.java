import java.net.*;
import java.io.*;

class P1
{
    public static void main(String arg[])
    {
        try
        {
            System.out.println("Server started..");

            ServerSocket ssobj = new ServerSocket(1400);

            Socket sobj = ssobj.accept();

            System.out.println("Server connected to client");

            PrintStream pobj = new PrintStream(sobj.getOutputStream());
        }
        catch(IOException e1)
        {
            System.out.println(e1);
        }  
    }
}