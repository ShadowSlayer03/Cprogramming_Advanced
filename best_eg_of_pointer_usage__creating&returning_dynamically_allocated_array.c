//Best eg of pointers usage

#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int *generateArray()
{
  int i;
  int *arr;
  arr = (int*)malloc(SIZE*sizeof(int)); // dynamic memory allocation
  printf("Enter the elements of the array\n");
  for(i=0;i<SIZE;i++)
    {
      scanf("%d",&arr[i]);
    }
  return arr; // return multiple nos of array using pointers
}
void printArray(int *p) // pass an array or string as parameters
{
  int i;
  for(i=0;i<SIZE;i++)
    {
      printf("%d ",p[i]);
    }
}
int main()
{
  int *arr1;
  arr1 = generateArray();
  printf("The array is\n");
  printArray(arr1);
  
}