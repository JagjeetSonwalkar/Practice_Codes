////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                File manuplication ( Write into the file )
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main()
{
    // write into file
    int fd = 0 ;                     // fd : File Descriptor
    char FileName[15] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_WRONLY);       // file operator to write only a file : open(nameOfFile , fileMode) 

    if(fd == -1)                    // if we get fd as -ve then it indicate unable to open a file
    {
        printf("Enable to open a file !!\n");
    }
    else
    {
        printf("File opened succesfully.\n");

        write(fd,"Hi end User.",12);         // file operator(file Descriptor , Data that you want to write , no. of byte that you want o write)

        printf("data writen succesfully into the file.\n");
    }

    close(fd);      // close the file

    return 0 ;
}

/*

Enter the name of file that you want to open :
time
File opened succesfully.
data writen succesfully into the file.

*/
