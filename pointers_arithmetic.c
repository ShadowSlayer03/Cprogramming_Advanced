// Pointers arithmetic
#include<stdio.h>

int main()
{
  int arr[100]={1,2,3,4,5};
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

  //dereferencing
  printf("Value 7: %d\n",*p); 
  printf("Value 8: %d\n",*p+1); 
  printf("Value 9: %d\n",*p+2); 

  //arithmetic address - address = integer
  //%p -- displays integer in hex
  //%d -- displays integer in integer
  printf("Value 10: %p\n",p+1-p); 
  printf("Value 11: %p\n",(p+2)-(p+1)); 
  printf("Value 12: %p\n",(p+5)-(p+10)); 

  printf("Value 10: %d\n",p+1-p); 
  printf("Value 11: %d\n",(p+2)-(p+1)); 
  printf("Value 12: %d\n",(p+5)-(p+10));
  return 0;
}