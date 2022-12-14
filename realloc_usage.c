//REALLOC USAGE
//To change the allocated memory during runtime
//pointer = (typecast)realloc(pointer,total size to be reserved)

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
  // Now I want to add 2 elements extra
  arr = (int*)realloc(arr,6*sizeof(int));
  arr[i] = 56;
  arr[i+1] = 89;
  printf("\n");
  printf("The new array is\n");
  for(i=0;i<6;i++)
    {
      printf("%d ",arr[i]);
    }
    free(arr);
    arr = NULL;
  return 0;
}