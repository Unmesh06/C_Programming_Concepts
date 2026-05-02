#include<stdio.h>

struct Demo
{
    int i;      //4
    int *ptr;   //8
};              //12

int main()
{
    struct Demo dobj;

    printf("Size of Object is :%d",sizeof(dobj));   //either 8 or 16
    
    return 0;
}