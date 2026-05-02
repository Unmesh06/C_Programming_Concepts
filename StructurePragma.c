#include<stdio.h>

//Declaration
#pragma pack(1)
struct Demo
{
    int i;      //4
    char ch;    //1  generates padding
    float f;    //4
};              //9

int main()
{
    struct Demo dobj;
    printf("%d",sizeof(dobj));  //9

    return 0;
}