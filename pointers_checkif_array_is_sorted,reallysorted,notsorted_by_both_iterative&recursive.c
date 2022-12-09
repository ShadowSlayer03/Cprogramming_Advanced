#include<stdio.h>

int checkifSorted(int *p,int size,int *ref)
{
  int j;
  for(j=0;j<size-1;j++)
    {
      if(p[j] == p[j+1])
      {
        *ref = 0;
        return 1;
        
      }  
      if(p[j]<p[j+1])
      {
         *ref = 1;
      }
       
      else if(p[j]>p[j+1])
      {
        *ref = 0;
        return 0;
      }  
        
    }
  return 1;
}

int checkifSortedRecursive(int *p,int size,int *ref)
{
  int result;
  if(size==1)
  {
    *ref =1;
    return 1;
  }
  result = checkifSortedRecursive(p,size-1,ref);
  if(result!=0 && p[size-1]==p[size-2])
  {
    *ref =0;
  }
  if(result!=0 && p[size-1]>p[size-2])
  {
    *ref =0;
  }
  return result;
}
int main()
{
  int size,i,result;
  printf("Size of array\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter elements of array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  int *ptr = arr;
  printf("Return value = %d ",checkifSorted(ptr,size,&result));
  printf("Pass = %d",result);
  }