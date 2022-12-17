// MALLOC USAGE //
// pointer = (typecast)malloc(sizeof(data type)*no of elements);
// typecast = int*, float* etc . Can be used if needed 
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int size,i;
  int *arr;
  printf("Enter size of array\n");
  scanf("%d",&size);
  arr = (int*)malloc(sizeof(int)*size);
  printf("Enter the elements of the array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("The entered array is\n");
  for(i=0;i<size;i++)
    {
      printf("%d",arr[i]);
    }
    free(arr);
    arr = NULL;
  return 0;
}