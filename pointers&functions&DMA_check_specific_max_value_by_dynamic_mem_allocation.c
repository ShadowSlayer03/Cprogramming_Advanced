// Develop a fn that receives a array(srcArray) and its size. The values in the array will be from 0 to size.
// The fn should find and return a value, that if we sum all of its instances the result will be max
// 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int i,j;

int specificMaxSum(int* arr,int size)
{
  int* sumArr;
  int sum=0,maxArr;
  sumArr = (int*)calloc(size+1,sizeof(int));
  assert(sumArr);
  for(i=0;i<size;i++)
    {
      for(j=0;j<size;j++)
        {
          if(arr[i]==arr[j])
          {
            sum +=arr[j];
          }
        }
      if(sum==0)
      {
        sumArr[arr[i]] = arr[i];
        continue;
      }  
      sumArr[arr[i]] = sum;
      sum =0;
    }  
  // for(i=0;i<=size;i++)
  //   {
  //     printf("%d ",sumArr[i]);
  //   }
  maxArr = sumArr[0];
  for(i=0;i<=size;i++)
    {
      if(sumArr[i]>maxArr)
        maxArr = sumArr[i];
    }
  return maxArr;
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
  int result = specificMaxSum(p,size);
  printf("The required Specific Max Value is %d",result);
 
  return 0;
}

