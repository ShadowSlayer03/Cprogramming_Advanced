// Given a sorted array of integers
// Using a function, create a new dynamically allocated array that has no duplicates
#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

int i,j=0;
int* NoDuplicates(int* arr)
{
  int* newArr;
  int count=0;
  newArr = (int*)malloc(SIZE*sizeof(int));
  for(i=0;i<SIZE;i++)
    {
      if(arr[i]!=arr[i+1])
      {
        count++;
        newArr[j] = arr[i];
        j++;
      }
    }
  newArr = (int*)realloc(newArr,count*sizeof(int));
  if(newArr==NULL)
  {
    printf("Realloc failed\n");
    exit(1);
  }
  return newArr;
}
int main()
{
  
  int arr[SIZE] = {1,1,2,2,4,6,8,90};
  int *p;
  p = &arr[0];
  int* result = NoDuplicates(p);
  for(i=0;i<SIZE;i++)
    {
      if(result[i]!=0)
      printf("%d ",result[i]);
    }
  return 0;
}