#include<stdio.h>
int SumofArray(int *p,int size)
// int SumofArray(int arr[],int size)
{
  int i,sum=0;
  for(i=0;i<size;i++)
    {
      sum = sum+*(p+i);
      // sum = sum+arr[i];
    }
  return sum;
}
int main()
{
  int array[5];
  int i,result;
  int *p=&array[0];
  
  for(i=0;i<5;i++)
    {
      scanf("%d",&array[i]);
    }
  result = SumofArray(p,5);
  // result = SumofArray(array,5);
  printf("The sum of elements in the array is %d",result);
}