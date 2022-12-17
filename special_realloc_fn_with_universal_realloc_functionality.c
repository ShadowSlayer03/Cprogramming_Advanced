//Special realloc function with universal reallocation functionality
//highly dynamic and user-oriented

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *myRealloc(void *srcblock,unsigned int oldSize, unsigned int newSize)
{
  void *p;
  int i;
  int size = sizeof(srcblock[0]);
  p = calloc(newSize, size);
  if(p==NULL)
  {
    printf("Allocation failed\n");
    exit(1);
  }
  memcpy(p,srcblock,size);
  return p;
}
int main()
{
  int arrSize;
  int j;
  int smallSize,newSize=6;
  printf("Enter size of array\n");
  scanf("%d",&arrSize);
  int arr[arrSize];
  printf("Enter the elements of the array\n");
  for(j=0;j<arrSize;j++)
    {
      scanf("%d",&arr[j]);
    }
  int *q;
  q = &arr[0];
  myRealloc(q,arrSize,newSize);
  if(newSize>arrSize)
  {
    smallSize = arrSize;
  }
  else
  {
    smallSize = newSize;
  }
  for(j=0;j<smallSize;j++)
    {
      printf("%d ",arr[j]);
    }
  return 0;
}