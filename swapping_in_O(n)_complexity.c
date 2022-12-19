// Receive 2 arrays of same size 
// Swap values one by one in O(n) complexity
//O(n) -- looping, time to execute depends on no of elements 
//O(1) -- no looping, constant time to execute 

#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

void swap(int *array1, int *array2);
void printArray(int *arr);

int main()
{
  int i;
  int arr1[SIZE] = {1,5,7};
  int arr2[SIZE] = {45,56,79};
  int *p, *q;
  p = &arr1[0];
  q = &arr2[0];
   for(i=0;i<SIZE;i++)
    {
        swap(p+i,q+i);
    }
  printArray(p);
  printf("\n");
  printArray(q);
  return 0;
}

void printArray(int *arr)
{
  int i;
  for(i=0;i<SIZE;i++)
    {
      printf("%d ",arr[i]);
    }
}
void swap(int *array1, int *array2)
{
  int temp,size = SIZE;
  temp = *array1;
  *array1 = *array2;
  *array2 = temp;
}