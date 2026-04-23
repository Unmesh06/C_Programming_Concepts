#include<stdio.h>

int Addition(int no1,int no2)
{
  int Ans=0;
  Ans=no1+no2;
  return Ans;
}
int main()
{
  int Ret=0,a=11,b=10;
  Ret=Addition(a,b);  //Call By Value

  printf("Addition is: %d\n",Ret);

  return 0;
}