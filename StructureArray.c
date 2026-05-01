#include<stdio.h>

struct Hello
{
    float f;        //4
    int arr[3];     //12
}hobj;              //16

int main()
{
    printf("Sizeof object is: %d\n",sizeof(hobj));

    return 0;
}