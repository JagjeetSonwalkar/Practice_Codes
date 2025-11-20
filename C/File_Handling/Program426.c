// Delete the file

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char name[20] ;

    printf("Enter the name of file that you want to Delete.\n");
    scanf("%[^'\n']s",name);
    
    unlink(name);

    return 0 ;
}

/*
    OUTPUT

    Enter the name of file that you want to Delete.
    Jack.txt

    Enter the name of file that you want to Delete.
    Six.txt

    Enter the name of file that you want to Delete.
    sky.txt

*/