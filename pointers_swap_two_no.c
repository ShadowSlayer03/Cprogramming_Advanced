#include<stdio.h>

void swap(int *p,int *q)
{
  int temp;
  temp =*p;
  *p = *q;
  *q = temp;
}

void main()
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  int *p =&a,*q =&b;
  printf("First no b4 swapping: %d\n",a);
  printf("Second no b4 swapping: %d\n",b);
  swap(p,q);
  printf("First no after swapping: %d\n",a);
  printf("Second no after swapping: %d\n",b);
}