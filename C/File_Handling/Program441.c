// get the name of file from user and read whole file and display the program on the screen

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024

int main()
{
    char Name[30];
    char Arr[FILESIZE] = {'\0'};
    int iRet = 0;
    int fd = 0;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    printf("Data from file is : \n");

    while((iRet = read(fd,Arr,FILESIZE)) != 0)
    {
        write(1,Arr,iRet);
    }

    printf("\n");

    close(fd);

    return 0;
}

/*
    OUTPUT

    Please enter the file name that you want to open
    Program441.c
    Data from file is :
    // get the name of file from user and read whole file and display the program on the screen

    #include<stdio.h>
    #include<unistd.h>
    #include<fcntl.h>

    #define FILESIZE 1024

    int main()
    {
        char Name[30];
        char Arr[FILESIZE] = {'\0'};
        int iRet = 0;
        int fd = 0;

        printf("Please enter the file name that you want to open\n");
        scanf("%[^'\n']s",Name);

        fd = open(Name,O_RDONLY);

        printf("Data from file is : \n");

        while((iRet = read(fd,Arr,FILESIZE)) != 0)
        {
            write(1,Arr,iRet);
        }

        printf("\n");

        close(fd);

        return 0;
    }
        
*/
