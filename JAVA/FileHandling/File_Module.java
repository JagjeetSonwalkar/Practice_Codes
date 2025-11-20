import java.util.Scanner ;
import java.io.File ;
import java.io.FileInputStream ;
import java.io.FileOutputStream ;
import java.io.FileWriter ;
import java.io.IOException ;
import java.io.FileNotFoundException ;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

class File_Operation
{
    public File createNewFilex ;
    public File openFile ;

    public void create(String fName)
    {
        createNewFilex = new File(fName);

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

    public void open(String fName)
    {
        openFile = new File(fName);

        if(!(openFile.exists()))
        {
            System.out.println("File not exists !!");
        }
        else
        {
            System.out.println("File opened");
        }
    }

    public void read(String fName)
    {
        openFile = new File(fName);

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

                int bytesRead = readFiledata.read(arrRead);

                String Filedata = new String(arrRead , 0 , bytesRead);

                System.out.println("---------Data------------");
                System.out.print(Filedata);
                System.out.println("\n-------------------------");

                readFiledata.close();
            }
            catch(FileNotFoundException e1)
            {
                System.out.println("ERROR occured : " + e1.getMessage());
            }
            catch(IOException e2)
            {
                System.out.println("ERROR occured : " + e2.getMessage());
                logError("read", e2.getMessage());
            }
        }
    }

    public void write(String fName)
    {
        Scanner sobj = new Scanner(System.in);

        openFile = new File(fName);

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

                WriteDataStream.close();
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

    public void delete(String fileName)
    {
        openFile = new File(fileName);

        if(openFile.exists())
        {
            System.out.println("File exists.");

            if(openFile.delete())
            {
                System.out.println("File deleted.");
            }
            else
            {
                System.out.println("File not deleted.");
            }
        }
        else
        {
            System.out.println("File not exists.");
        }
    }

    public void details(String fileName)
    {
        openFile = new File(fileName);

        if(openFile.exists())
        {
            System.out.println("File exists.");
            System.out.println("Name of file is : "+ openFile.getName());
            System.out.println("Size of file is : "+ openFile.length());
            System.out.println("Path of File is : "+ openFile.getAbsolutePath());
            System.out.println("File is readable : "+ openFile.canRead());
            System.out.println("File is writable : "+ openFile.canWrite());
        }
        else
        {
            System.out.println("File not exists.");
        }
    }

    public void listFiles(String dirPath) 
    {
        File dir = new File(dirPath.trim());
        System.out.println("Checking directory: " + dir.getAbsolutePath());
        System.out.println("Exists? " + dir.exists());
        System.out.println("Is Directory? " + dir.isDirectory());

        if (dir.exists() && dir.isDirectory()) 
        {
            String[] files = dir.list();
            System.out.println("Files in directory:");
            for (String file : files) 
            {
                System.out.println(file);
            }
        } 
        else 
        {
            System.out.println("Invalid directory.");
        }
    }

    public void rename(String oldName, String newName) 
    {
        File oldFile = new File(oldName);
        File newFile = new File(newName);
        if (oldFile.exists()) 
        {
            if (oldFile.renameTo(newFile)) 
            {
                System.out.println("File renamed successfully.");
            } 
            else 
            {
                System.out.println("File rename failed.");
            }
        } 
        else 
        {
            System.out.println("Original file does not exist.");
        }
    }

    public void logError(String operation, String message) 
    {
        try (FileWriter logWriter = new FileWriter("error_log.txt", true)) 
        {
            String timeStamp = LocalDateTime.now().format(DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss"));
            logWriter.write("[" + timeStamp + "][" + operation + "] ERROR: " + message + "\n");
        } 
        catch (IOException e) 
        {
            System.out.println("Logging failed: " + e.getMessage());
        }
    }
}

class File_Module
{
    public static void main(String[] arg)
    {
        int iOption = 0 ; 
        String fName = null ;

        Scanner sobj = new Scanner(System.in);

        File_Operation cobj = new File_Operation();

        System.out.println("---------------------------------------------------");
        System.out.println("<------- File Operation module Starting... ------->");

        while(true)
        {
            System.out.println("---------------------------------------------------");
            System.out.println("0 : Terminate/Stop the module");
            System.out.println("1 : Create new File");
            System.out.println("2 : Open an existing File");
            System.out.println("3 : Read data from existing File");
            System.out.println("4 : Write data into the existing File");
            System.out.println("5 : Get details of File");
            System.out.println("6 : Delete the existing File");
            System.out.println("7 : List all files in a directory");
            System.out.println("8 : Rename a file");
            System.out.println("9 : Log errors to log file");
            System.out.println("---------------------------------------------------");
            System.out.println("Enter your option : ");
            iOption = sobj.nextInt();
            sobj.nextLine();
            System.out.println("---------------------------------------------------");   
            if(iOption == 0)
            {
                System.out.println("Terminating the module");
                break ;
            }
            else if(iOption == 1)
            {
                System.out.println("Create file with name : ");
                fName = sobj.nextLine();

                cobj.create(fName);
            }
            else if(iOption == 2)
            {
                System.out.println("file name to open : ");
                fName = sobj.nextLine();

                cobj.open(fName);
            }
            else if(iOption == 3)
            {
                System.out.println("file name to read the data : ");
                fName = sobj.nextLine();

                cobj.read(fName);
            }
            else if(iOption == 4)
            {
                System.out.println("file name to write the data : ");
                fName = sobj.nextLine();

                cobj.write(fName);
            }
            else if(iOption == 5)
            {
                System.out.println("file name to get details : ");
                fName = sobj.nextLine();

                cobj.details(fName);
            }
            else if(iOption == 6)
            {
                System.out.println("file name to delete : ");
                fName = sobj.nextLine();

                cobj.delete(fName);
            }
            else if (iOption == 7) 
            {
                System.out.println("Enter directory path to list files: ");
                String dir = sobj.nextLine();
                cobj.listFiles(dir);
            }
            else if (iOption == 8) 
            {
                System.out.println("Enter old file name: ");
                fName = sobj.nextLine();

                sobj.nextLine();

                System.out.println("Enter new file name: ");
                String newName = sobj.nextLine();

                cobj.rename(fName , newName);
            }
            else if(iOption == 9)
            {
                System.out.println("Enter operation name (e.g., read, write, delete): ");
                String op = sobj.nextLine();

                System.out.println("Enter error message to log: ");
                String errMsg = sobj.nextLine();

                cobj.logError(op, errMsg);
                System.out.println("Error logged to error_log.txt");
            }
            else
            {
                System.out.println("!! Invalid Option , Enter the Correct option");
            }
        }
    }
}