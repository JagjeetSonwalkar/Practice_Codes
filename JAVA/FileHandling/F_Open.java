import java.util.Scanner ;
import java.io.File ;

class F_Open
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
            System.out.println("File opened");
        }
    }
}