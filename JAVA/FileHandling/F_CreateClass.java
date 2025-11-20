import java.util.Scanner ;
import java.io.File ;
import java.io.IOException ;

class CreateFile
{
    public File newFile ;

    public void create(String newFileCreate)
    {
        newFile = new File(newFileCreate);

        if(newFile.exists())
        {
            System.out.println("File already exists with this name \t Unable to create file !!");
            return ;
        }
        else
        {
            try
            {
                if(newFile.createNewFile())
                {
                    System.out.println("new File Created with name : " + newFile.getName());
                }
                else
                {
                    System.out.println("!! Unable to create file !!");
                }
            }
            catch(IOException eobj)
            {
                System.out.println("ERROR occured : " + eobj.getMessage());
            }
        }
    }
}

class F_CreateClass
{
    public static void main(String[] arg)
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Create file with name : ");
        String newFileName = sobj.nextLine();

        // if(!(newFileName.endsWith(".txt")))
        // {
        //     newFileName += ".txt" ;
        // }

        CreateFile cFile = new CreateFile();

        cFile.create(newFileName);
    }
}