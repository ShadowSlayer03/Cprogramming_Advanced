#include <stdio.h>
#define SIZE 5

int findSecondSmallest(int *arr, int size)
{
  int min = arr[0];
  int i,secondMin=arr[0];
  for(i=1;i<size;i++)
    {
      if(arr[i]<min)
      {
        secondMin = min;
        min = arr[i];        
      }
      else if (arr[i]<secondMin)
      {
        secondMin = arr[i];
      }
    }

  return secondMin;
}
int main() 
{
  int arr[] = {9,1,8,4,2};
  int *p = arr;
  printf("%d",findSecondSmallest(p,SIZE));
  return 0;
}
