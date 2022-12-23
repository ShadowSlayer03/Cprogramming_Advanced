// Develop a function that receives an array of integers and its size. The values in the array are from 0 to size
// The fn should return the largest missing value in the array
// The fn should be without nested loops
#include<stdio.h>
#include<stdlib.h>
int i;

int findLargestMissingValue(int *srcArr,int size)
{
  int* countArr;
  countArr = (int*)malloc((size+1)*sizeof(int));
  if(countArr==NULL)
  {
    printf("Malloc failed");
    exit(1);
  }
  //Building the count Array that has the freq of occurrence of elements inside the source array
  for(i=0;i<=size;i++)
    {
      countArr[srcArr[i]]++;
    } 
  for(i=size;i>=0;i--)
    {
      if(countArr[i]==0)
      {
        return i;
      }
    }
}
  
int main()
{
  int size;
  int result;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  int *array;
  array = (int*)malloc(size*sizeof(int));
  printf("Enter the elements of the array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&array[i]);
    }
  result = findLargestMissingValue(array,size);
  printf("The largest missing value is %d",result);
  return 0;
}
