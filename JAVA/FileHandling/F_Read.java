import java.util.Scanner ;
import java.io.File ;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

class F_Read
{
    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Open File with name : ");
        String fName = sobj.nextLine();

        File openFile = new File(fName);

        if(!(openFile.exists()))
        {
            System.out.println("File not exists !!");
        }
        else
        {
            try
            {
                System.out.println("File opened");

                FileInputStream readFiledata = new FileInputStream(openFile);
                System.out.println("Reading the data...");

                byte[] arrRead = new byte[1024];

                readFiledata.read(arrRead);

                String Filedata = new String(arrRead);

                System.out.println("---------Data------------");
                System.out.print(Filedata);
                System.out.println("\n-------------------------");
            }
            catch(FileNotFoundException e1)
            {
                System.out.println("ERROR occured : " + e1.getMessage());
            }
            catch(IOException e2)
            {
                System.out.println("ERROR occured : " + e2.getMessage());
            }
        }
    }
}