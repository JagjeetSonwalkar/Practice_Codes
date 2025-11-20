/*
    Open the existing file and get the name of file from user also write 'ABCDEFGHIJKLMNOP' into the file and close the file and 
    display its fd and bytes gets succesfully written into the file
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0 ;
    char name[20] ;
    int iRet = 0 ;

    printf("Enter the name of file that you want to open.\n");
    scanf("%[^'\n']s",name);

    fd = open(name,O_RDWR);

    if(fd == -1)
    {
        printf("Enable to open file.\n");
    }
    else
    {
        printf("File opened succesfully with FD : %d\n",fd);
        iRet = write(fd,"ABCDEFGHIJKLMNOP",10);
        printf("%d bytes gets succesfully written into the file\n",iRet);
        close(fd);
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the name of file that you want to open.
    MI.txt
    File opened succesfully with FD : 3
    10 bytes gets succesfully written into the file


    Enter the name of file that you want to open.
    Jaggi.txt
    File opened succesfully with FD : 3
    10 bytes gets succesfully written into the file

*/