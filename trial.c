#include <stdio.h>

int main()
{
    int arr[]={10,20,30,40,50};
    int *p=arr;
    printf("%d",arr);
    printf("%d",&arr);
    printf("%d",p);
    printf("%d",*p);
    printf("%d",sizeof(arr));
    printf("%d",sizeof(arr[0]));

    return 0;
}