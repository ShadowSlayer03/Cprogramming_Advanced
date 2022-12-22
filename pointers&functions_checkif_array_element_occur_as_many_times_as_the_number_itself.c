//Develop a func that receives an array of integers,its size, a number k. The array values are b/w 0 and k.
//The function should check and return 1, if the no of occurrences of every value in the array equals to itself, otherwise return 0.

#include<stdio.h>
#include<stdlib.h>

int FreqAsValue(int* arr,unsigned int size,const int k)
{
  int i,j;
  for(i=0;i<size;i++)
    {
      int count = 0;
      for(j=0;j<size;j++)
        {
          if(arr[i]==arr[j])
          count++;
        }
      if(arr[i]!=count)
      {
        return 0;
      }
    }
  return 1;
}
int main()
{
  int size,k,i;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the elements of the array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  int* p;
  p = &arr[0];
  printf("Enter value of k\n");
  scanf("%d",&k);
  printf("%d",FreqAsValue(p,size,k));
  return 0;
}