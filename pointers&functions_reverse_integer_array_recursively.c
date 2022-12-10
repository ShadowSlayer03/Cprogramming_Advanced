// Code to reverse array of integers recursively
#include<stdio.h>
#include<stdlib.h>

void swap(int *p,int *q)
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}
void revArrayRecursive(int *arr,int size)
{
  if(size>1)
  {
    swap(arr,arr+size-1);
    revArrayRecursive(arr+1,size-2);
  }
}
int main()
{
  int size,i;
  printf("Enter size of array\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter elements of array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  revArrayRecursive(arr,size);
  for(i=0;i<size;i++)
    {
      printf("%d",arr[i]);
    }
  return 0;
}