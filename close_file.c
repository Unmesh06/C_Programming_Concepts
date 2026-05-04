#include<stdio.h>
#include<fcntl.h>       // file control header file
#include<unistd.h>      // universal standard 

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets Opened with fd : %d",fd);
    }

    close(fd);

    return 0;
}