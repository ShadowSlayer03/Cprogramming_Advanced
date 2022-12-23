// Write a function that receives an array of integers
// This function should be of a "void" type
// Create and copy all the elements from the received array to a new one.
// Pass this new array by reference to main function 

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int i;
void cpyArr(int** arr,int* createdArr)
{
  int* newArr;
  newArr = (int*)calloc(SIZE,sizeof(int));
  for(i=0;i<SIZE;i++)
    {
     newArr[i] = createdArr[i];
    }
  *arr = newArr;
}
int main()
{
  int array[SIZE] = {1,2,78,56,5};
  int* p; // copied array going to be stored
  int* q = &array[0]; // created array is stored
  cpyArr(&p,q);
  printf("The copied array is\n");
  for(i=0;i<SIZE;i++)
    {
      printf("%d ",p[i]);
    }
  
}