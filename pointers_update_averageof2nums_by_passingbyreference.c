#include<stdio.h>

void updateAvg(int num1,int num2,double *avg)
{
  *avg = (num1+num2)/2.0;
}
int main()
{
  int a,b;
  double average =0;
  double *p; 
  p = &average;
  printf("Enter 1st number\n");
  scanf("%d",&a);
  printf("Enter 2nd number\n");
  scanf("%d",&b);
  //before calling fn
  printf("%.2lf\n",average);
  updateAvg(a,b,p);
  // after calling fn 
  printf("%.2lf",average);

  return 0;
}