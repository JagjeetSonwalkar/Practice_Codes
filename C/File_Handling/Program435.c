// get the name of file from user and read whole file and display on it screen

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char name[30] = {'\0'};
    char Arr[10] = {'\0'};

    int fd = 0 ;
    int iRet = 0 ;

    printf("Enter the name of the file that you want to create.\n");
    scanf("%[^'\n']s",name);

    fd = open(name,O_RDONLY);

    iRet=read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet=read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet=read(fd,Arr,10);
    write(1,Arr,iRet);

    close(fd);

    return 0 ;
}

/*
    OUTPUT

    Enter the name of the file that you want to create.
    Jaggi.txt
    ABCDEFGHIJKLMNOPQRSTUVWXYZ

*/