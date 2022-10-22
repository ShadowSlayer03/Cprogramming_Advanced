// Pointers arithmetic
#include<stdio.h>

int main()
{
  int arr[5]={1,2,3,4,5};
  int *p;
  p = &arr;
  // same
  printf("Value 1: %p\n",&arr[0]);
  printf("Value 1: %p\n",p);
  //
  printf("Value 2: %p\n",&arr[1]);  
  printf("Value 3: %p\n",&arr[2]);  

  printf("Value 4: %p\n",arr); 
  printf("Value 5: %p\n",arr+1); 
  printf("Value 6: %p\n",arr+2); 
  return 0;
}