#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char name[30];
    char Arr[20] = {'\0'};
    char Brr[20] = {'\0'};
    int fd = 0 ;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",name);

    fd = open(name,O_RDONLY);

    read(fd,Arr,8);

    printf("Data from the file is : %s\n",Arr);

    read(fd,Brr,5);

    printf("Data from the file is : %s\n",Brr);

    return 0 ;
}

/*
    OUTPUT

    Please enter the file name that you want to open
    Jaggi.txt
    Data from the file is : ABCDEFGH
    Data from the file is : IJKLM

*/