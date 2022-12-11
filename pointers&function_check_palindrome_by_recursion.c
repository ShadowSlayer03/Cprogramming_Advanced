// Check palindrome by recursion using a fn that takes an array of integers and its size
// Return 1 if palindrome
// Return 0 otherwise

#include<stdio.h>

int checkPalindrome(int *array,int size)
{
  if(size>1)
  {
    if(array[0]!=array[size-1])
      return 0;
    
     checkPalindrome(array+1, size-1);
  }
  return 1;
}
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
  printf("%d",checkPalindrome(arr,size));
return 0;
}