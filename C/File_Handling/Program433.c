#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0 ;

    char name[30] = {'\0'};
    char Arr[20] = {'\0'};

    printf("Please enter the file name that you want to create.\n");
    scanf("%[^'\n']s",name);

    fd = open(name,O_RDONLY);

    lseek(fd,-10,SEEK_END);

    read(fd,Arr,5);

    printf("Data from file is : %s\n",Arr);

    close(fd);

    return 0 ;
}

/*
    OUTPUT

    Please enter the file name that you want to create.
    Jaggi.txt
    Data from file is : QRSTU

*/