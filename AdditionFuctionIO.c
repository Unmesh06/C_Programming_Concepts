#include<stdio.h>

int Addition(int no1,int no2)
{
  int Ans=0;
  Ans=no1+no2;
  return Ans;
}
int main()
{
  int Ret=0,a=0,b=0;
  
  printf("Enter 1st Number:\n");
  scanf("%d",&a);

  printf("Enter 2nd Number:\n");
  scanf("%d",&b);

  Ret=Addition(a,b); 

  printf("Addition is: %d\n",Ret);

  return 0;
}