// Develop a fn that receives a nat no. array(srcArray) and its size. The values in the array will be from 0 to size.
// The n should return a dominant value if it exists. Otherwise return -1.
// A dominant value is one where the number of occurrences are greater than half the size of the array
#include<stdio.h>
#include<stdlib.h>

int i,j;
int checkDominant(int *srcArr,int size)
{
  int count =0;
  int half = size/2;
  for(i=0;i<size;i++)
    {
      for(j=0;j<size;j++)
        {
          if(srcArr[i]==srcArr[j])
          {
            count++;
          }
          if(count>half)
            return srcArr[i];
        }
      count =0;
    }
  return -1;
}
int main()
{
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the values of the array(any value from 0 to size)\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  int *p = &arr[0];
  int result = checkDominant(p,size);
  printf("%d\n",result);
  if(result!=-1)
  {
    printf("Dominant value found = %d\n",result);
  }
  else
  {
    printf("No dominant value found\n");
  }
  return 0;
}

////////////////////////////////////////////////////////////
// Alternate method to solve the same exercise by DMA //
/*
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int findDominantvalue(int* srcArr,int size)
  {
    int* countArr;
    int i;
    countArr = (int*)malloc((size+1)*sizeof(int));
    assert(countArr);
    for(i=0;i<size;i++)
      {
        countArr[srcArr[i]]++;
      }
    for(i=0;i<=size;i++)
      {
        if(countArr[i]>size/2)
          return i;
      }
  return -1;
  }
int main()
{
  int arr[SIZE] = {3,5,4,3,3};
  int result = findDominantValue(arr,SIZE);
    if(result!=-1)
  {
    printf("Dominant value found = %d\n",result);
  }
  else
  {
    printf("No dominant value found\n");
  }
  return 0;
}*/