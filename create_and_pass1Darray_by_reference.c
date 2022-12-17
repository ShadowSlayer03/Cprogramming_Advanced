// create a dynamically allocated array in a subprogram that returns void and pass it to the main function by passing by reference

#include<stdio.h>
#include<stdlib.h>

void create1DbyRef(int **p,int size)
{
  int i;
  int *arr;
  arr = (int*)calloc(size,sizeof(int));
  if(arr==NULL)
  {
    printf("Allocation failed");
    exit(1);
  }
  printf("Enter the elements of the array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  *p = arr; // p is a pointer to pointer to int whose value is now equal to the address of arr
}
int main()
{
  int *ptr;
  int size,i;
  printf("Enter the size of array:\n");
  scanf("%d",&size);
  create1DbyRef(&ptr,size);
  for(i=0;i<size;i++)
    {
      printf("%d ",ptr[i]);
    }
  return 0;
}
