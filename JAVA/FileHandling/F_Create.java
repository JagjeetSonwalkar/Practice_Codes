import java.util.Scanner ;
import java.io.File ;
import java.io.IOException ;

class F_Create
{
    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Create file with name : ");
        String fName = sobj.next();

        File createNewFilex = new File(fName);

        if(createNewFilex.exists())
        {
            System.out.println("File already exists with this name \t Unable to create file !!");
            return ;
        }
        else
        {
            try
            {
                createNewFilex.createNewFile();
                System.out.println("File Created.");
            }
            catch(IOException eobj)
            {
                System.out.println("An erroe occured : "+ eobj.getMessage());
            }
           
        }
    }
}