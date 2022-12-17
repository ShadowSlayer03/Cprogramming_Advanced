// CALLOC USAGE //
// pointer = (typecast)calloc(no of elements,sizeof(data type));
// typecast = int*, float* etc . Can be used if needed else ignored

// Diff b/w malloc & calloc is that calloc allocates memory, pre-initialize elements to 0 and return address of first element while malloc just allocates memory and return address of first element

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int size,i;
  int *arr;
  printf("Enter size of array\n");
  scanf("%d",&size);
  arr = (int*)calloc(5,sizeof(int));
  printf("Enter the elements of the array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("The entered array is\n");
  for(i=0;i<size;i++)
    {
      printf("%d ",arr[i]);
    }
    free(arr);
    arr=NULL;
  return 0;
}