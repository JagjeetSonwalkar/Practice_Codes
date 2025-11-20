// Create a file and get the name of file from user 

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0 ;
    char file_Name[30];

    printf("Please enter the file name that you want to create.\n");
    scanf("%[^'\n']s",file_Name);

    fd = creat(file_Name,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else 
    {
        printf("File succesfully created\n");
    }

    return 0 ;
}

/*
    OUTPUT

    Please enter the file name that you want to create.
    Jack.txt
    File succesfully created


    Please enter the file name that you want to create.
    MI.txt
    File succesfully created

*/