import java.util.Scanner ;
import java.io.File ;
import java.io.FileOutputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

class F_WriteDataLast
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

                FileOutputStream WriteDataStream = new FileOutputStream(openFile,true);

                System.out.println("Write data into file...");

                String WriteData = sobj.nextLine();

                byte[] WriteDataByte = WriteData.getBytes();

                WriteDataStream.write(WriteDataByte);

                System.out.println("---------Data Writen------------");
                System.out.print(WriteData);
                System.out.println("\n-------------------------");

                openFile.close();
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