////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////                                File manuplication (create the file)
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<fcntl.h> // file controller 

int main()
{
    // create a file
    int fd = 0 ;                     // fd : File Descriptor
    char FileName[15] = {'\0'};

    printf("Enter the name of file that you want to create : \n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);       // file operator to create a file : creat(nameOfFile , filePermission) 

    if(fd == -1)                    // if we get fd as -ve then it indicate unable to create a file
    {
        printf("Enable to create a file !!\n");
    }
    else
    {
        printf("created a file.\n");
    }

    return 0 ;
}

/*

Enter the name of file that you want to create :
time.txt
created a file.

Enter the name of file that you want to create :
sky
created a file.

Enter the name of file that you want to create :
p1.c
created a file.

*/
