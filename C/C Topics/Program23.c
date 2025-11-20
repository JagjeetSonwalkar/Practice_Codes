////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                File manuplication (Open the file && close the file)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main()
{
    // open a file
    int fd = 0 ;                     // fd : File Descriptor
    char FileName[15] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s",FileName);

    /*
        File mode  : 
            O_RDONLY : Read only
            O_WRONLY : Write only
            O_RDWR   : Read + write
    */

    fd = open(FileName,O_RDONLY);       // file operator to open a file : open(nameOfFile , fileMode) 

    if(fd == -1)                    // if we get fd as -ve then it indicate unable to open a file
    {
        printf("Enable to open a file !!\n");
    }
    else
    {
        printf("File opened succesfully.\n");
    }

    close(fd);      // close the file

    return 0 ;
}

/*

Enter the name of file that you want to open :
time
File opened succesfully.

*/
