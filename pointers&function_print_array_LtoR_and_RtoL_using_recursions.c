//Develop 2 recursive fns
// both receives an array and its sixe
// FN A - prints all elements left to right
// FN B - prints all elements right to left

#include<stdio.h>
#include<stdlib.h>
#define SIZE 4


int printarrLtoR(int *arr, int size)
{
  if(size==1)
  {
    return *arr;
  }
  printf("%d ",arr[0]);
  return printarrLtoR(arr+1,size-1);
  
}
void printarrRtoL(int *arr, int size)
{
  if(size>0)
  {
    printf("%d ",arr[size-1]);
    printarrRtoL(arr,size-1);
  }
}

int main()
{
 int result,newResult;
 int array[SIZE] = {78,5,6,34};
 int *p;
  p = &array[0];
 result = printarrLtoR(p,SIZE);
 printf("%d",result);
  printf("\n");
 printarrRtoL(p,SIZE);

  return 0;
}