#include<stdio.h>
#include<fcntl.h>       // file control header file
#include<unistd.h>      // universal standard 

int main()
{
    unlink("Marvellous.txt");

    return 0;
}