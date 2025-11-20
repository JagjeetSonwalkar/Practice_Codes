////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                File manuplication (delete file)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h>

int main()
{
    // delete the file
    int fd = 0 ;                     // fd : File Descriptor
    char FileName[15] = {'\0'};

    printf("Enter the name of file that you want to delete : \n");
    scanf("%s",FileName);

    unlink(FileName);               // file_operater(FileDescriptor , ReadData from , no. of bytes to read);
    printf("file deleted succesfully.\n");

    return 0 ;
}

/*

Enter the name of file that you want to delete :
time
file deleted succesfully.

*/
