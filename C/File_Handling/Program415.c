// Create a file

#include<stdio.h>
#include<unistd.h>      // universal standard header file
#include<fcntl.h>       // File control header file

int main()
{
    int fd = 0 ;        // file disripter (fd)

    fd = creat("Jaggi.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else            // (0 <= +ve Num)
    {
        printf("File Succesfully created\n");
    }

    return 0 ;
}

/*
    OUTPUT

    File Succesfully created

*/