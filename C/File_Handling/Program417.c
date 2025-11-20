// Create a file and get the name of file from user and display its fd

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
        printf("File succesfully created with FD %d\n",fd);
    }

    return 0 ;
}

/*
    OUTPUT

    Please enter the file name that you want to create.
    sky.txt
    File succesfully created with FD 3

*/