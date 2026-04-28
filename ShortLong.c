#include<stdio.h>
int main()
{
    int i = 11;
    short int j = 11;
    long int k = 11;

    printf("size of int:%d\n",sizeof(i));          //4
    printf("size of short int:%d\n",sizeof(j));    //2
    printf("size of long int:%d\n",sizeof(k));     //8

    return 0;
}