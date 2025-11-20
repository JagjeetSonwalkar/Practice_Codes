// get the name of file from user and read whole file and display on it screen

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[10] = {'\0'};
    int iRet = 0;
    int fd = 0;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

   iRet = read(fd,Arr,10);
    printf("Number of bytes read : %d\n",iRet);

    iRet = read(fd,Arr,10);
    printf("Number of bytes read : %d\n",iRet);

    iRet = read(fd,Arr,10);
    printf("Number of bytes read : %d\n",iRet);

    iRet = read(fd,Arr,10);
    printf("Number of bytes read : %d\n",iRet);

    close(fd);

    return 0;
}

/*
    OUTPUT

    Please enter the file name that you want to open
    Jaggi.txt
    Number of bytes read : 10
    Number of bytes read : 10
    Number of bytes read : 6
    Number of bytes read : 0

*/