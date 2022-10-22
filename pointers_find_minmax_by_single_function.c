// Design a program which contains a function that finds and returns min and max among 2 nos //
#include<stdio.h>

int findMinMax(int num1,int num2,int *Pmax,int *Pmin )
{
  if(num1>num2)
  {
    *Pmax = num1;
    *Pmin = num2;
  }
  else
  {
    *Pmax = num2;
    *Pmin = num1;
  }
  
}
int main()
{
  int a,b;
  printf("Enter a \n");
  scanf("%d",&a);
  printf("Enter b \n");
  scanf("%d",&b);
  int max,min;
  int *Pmax,*Pmin;
  Pmax = &max;
  Pmin = &min;
  findMinMax(a,b,Pmax,Pmin);
  printf("The maximum number is : %d\n",max);
  printf("The minimum number is : %d\n",min);
  
  return 0;
}