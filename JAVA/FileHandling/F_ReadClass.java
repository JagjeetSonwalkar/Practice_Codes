import java.util.Scanner;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

class File_Open
{
    public File openFile ;

    public void openFile(String fileName)
    {
        openFile = new File(fileName);

        if(!openFile.exists())
        {
            System.out.println("File not exists !!");
            return ;
        }
        else
        {
            try
            {
                System.out.println("File is opened.");

                FileInputStream readFiledata = new FileInputStream(openFile);

                byte[] readFiledataArray = new byte[1024];

                readFiledata.read(readFiledataArray);

                String readData = new String(readFiledataArray);
                
                System.out.println("-----------------------------");
                System.out.print(readData);
                System.out.println("\n-----------------------------");
            }
            catch( FileNotFoundException e1)
            {
                System.out.println("ERROR : "+ e1.getMessage());
            }
            catch( IOException e2)
            {
                System.out.println("ERROR : "+ e2.getMessage());
            }
        }
    }
}

class F_ReadClass
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("File name to open");
        String fName = sobj.nextLine();

        File_Open openFile = new File_Open();
        openFile.openFile(fName);

    }
}