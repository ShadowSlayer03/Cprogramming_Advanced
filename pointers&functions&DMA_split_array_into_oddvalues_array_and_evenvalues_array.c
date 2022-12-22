// An array of integers is taken from the user
// Create 2 dynamically allocated arrays in a single function
// First array will only have even values
// Second array will only have odd values
// the function should simply print the values of both the arrays
#include<stdio.h>
#include<stdlib.h>

int i,j=0,k=0;

void printArray(int* array,int size)
{
  for(i=0;i<size;i++)
    {
      printf("%d ",array[i]);
    }
}
void createOddEvenArrays(int* arr,int size)
{
  int countOdd=0,countEven=0;
  int *evenArr, *oddArr;
  evenArr = (int*)malloc(sizeof(int)*size);
  oddArr = (int*)malloc(sizeof(int)*size);
  for(i=0;i<size;i++)
    {
      if(arr[i]%2==0)
      {
        evenArr[j] = arr[i];
        countEven++;
        j++;
      }
      else
      {
        oddArr[k] = arr[i];
        countOdd++;
        k++;
      }
    }
  evenArr = (int*)realloc(evenArr,sizeof(int)*countEven);
  if(evenArr==NULL)
  {
    printf("EVEN array realloc failed");
  }
  oddArr = (int*)realloc(oddArr,sizeof(int)*countOdd);
  if(oddArr==NULL)
  {
    printf("ODD array realloc failed");
  }
  printf("The values in the even array are\n");
  printArray(evenArr,countEven);
  printf("\n");
  printf("The values in the odd array are\n");
  printArray(oddArr,countOdd);  
  
}
int main()
{
  int size;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter the values of the array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  int* p = &arr;
  createOddEvenArrays(p,size);
  return 0;
}