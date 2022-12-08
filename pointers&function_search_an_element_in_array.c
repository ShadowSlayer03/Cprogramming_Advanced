#include<stdio.h>

void searchNum(int *p,int size,int element)
{
  int i,flag=0;
  for(i=0;i<size;i++)
    {
      if(p[i]==element)
      {
        flag = 1;
        break;
      }
    }
  if(flag == 1)
  printf("Element is present in array\n");
  else
  printf("Element is not present in array\n");
}
int main()
{
  int size,n,i;
  int *p;
  printf("Enter size of array:\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter elements of array:\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  p = &arr;
  printf("Enter element to be searched:\n");
  scanf("%d",&n);
  searchNum(p,size,n);
  return 0;  
}
