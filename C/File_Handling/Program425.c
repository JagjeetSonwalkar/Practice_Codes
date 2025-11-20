/*
    Open the existing file and get the name of file from user also read the file and close the file and 
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
    char Arr[50] = {'\0'};

    printf("Enter the name of file that you want to open.\n");
    scanf("%[^'\n']s",name);

    fd = open(name,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file.\n");
    }
    else
    {
        printf("File opened succesfully with FD : %d\n",fd);
        iRet = read(fd,Arr,5);
        printf("%d bytes gets succesfully read from the file\n",iRet);
        printf("Data from the file is : %s\n",Arr);
        close(fd);
    }

    return 0 ;
}

/*
    OUTPUT

    Enter the name of file that you want to open.
    MI.txt
    File opened succesfully with FD : 3
    5 bytes gets succesfully read from the file
    Data from the file is : Jay G

*/