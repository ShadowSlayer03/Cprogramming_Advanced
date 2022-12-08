#include<stdio.h>
#define SIZE 5

void findMinMax(int *arr,int *a,int *b)
{
  // a-- max , b-- min
  int j;
  *a = 0;
  *b = arr[0];
  for(j=0;j<SIZE;j++)
    {
      if(arr[j]>*a)
      {
        *a = arr[j];
      }
      if(arr[j]<*b)
      {
        *b = arr[j];
      }
    }
}
void main()
{
  int i,array[SIZE];
  int max,min;
  int *p,*Pmax,*Pmin;
  p = &array[0];
  printf("Enter the elements of the array\n");
  for(i=0;i<SIZE;i++)
    {
      scanf("%d",&array[i]);
    }
  Pmax= &max;
  Pmin =&min;
  findMinMax(p,Pmax,Pmin);
  printf("The max element is %d\n",max);
  printf("The min element is %d",min);
}