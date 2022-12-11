// Recursive fn that takes an array and its size
// Return 1 if adjacent elements have opposite sign
// Return 0 otherwise

#include<stdio.h>

int checkOppositeSign(int *array,int size)
{
  if(size==1)
    {
      return 1;
    }
  if((*array>0 && *(array+1)>0) || ((*array)<0 && *(array+1)<0))
     return 0;
  checkOppositeSign(array+1,size-1); //leftmost elements comparison
}

// DIFFERENT IMPLEMENTATION 
// a*b = +ve when both have same signs
// a*b = -ve when both have diff signs
int checkOppositeSign(int *array,int size)
{
  if(size==1)
    {
      return 1;
    }
  if(array[size-1] * array[size-2 >=0])
     return 0;
  return checkOppositeSign(array,size-1); // rightmost elements comparison
}
//

int main()
{
  int size,i;
  printf("Enter the size of array\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements of array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  printf("%d",checkOppositeSign(arr,size));
return 0;
}


