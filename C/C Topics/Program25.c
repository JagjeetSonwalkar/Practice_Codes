////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                File manuplication (Read data from the file)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main()
{
    // Read data from the file
    int fd = 0 ;                     // fd : File Descriptor
    char FileName[15] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDONLY);       // file operator to write only a file : open(nameOfFile , fileMode) 

    if(fd == -1)                    // if we get fd as -ve then it indicate unable to open a file
    {
        printf("Enable to open a file !!\n");
    }
    else
    {
        printf("File opened succesfully.\n");

        char ReadData[1024] = {'\0'};

        read(fd,ReadData,12);               // file_operater(FileDescriptor , ReadData from , no. of bytes to read);

        printf("data readed from the file succesfully : %s\n",ReadData);
    }

    close(fd);      // close the file

    return 0 ;
}

/*

Enter the name of file that you want to open :
time
File opened succesfully.
data readed from the file succesfully : Hi end User.

*/
