// Open the existing file and get the name of file from user and close the file and display its fd

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0 ;
    char name[20] ;

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
        close(fd);
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the name of file that you want to open.
    Tiger
    Enable to open file.

 
    Enter the name of file that you want to open.
    Jaggi
    Enable to open file.

   
    Enter the name of file that you want to open.
    Jaggi.txt
    File opened succesfully with FD : 3


    Enter the name of file that you want to open.
    Sky.txt
    File opened succesfully with FD : 3

*/