//Write a recursion function that:
//Receives an array of floating numbers and size
//Returns 1 if:
// -for any 2 adjacent elements in array,
// increasing order of integer part and decreasing order of floating part
// Returns 0 otherwise

#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int areElementsSorted(float *arr, int size)
{
  int n1,n2;
  float f1,f2;
  if(size==1)
  {
    return 1;
  }
  n1 = *arr;
  n2 = *(arr+1);
  f1 = *arr - n1;
  f2 = *(arr+1) - n2;
  if(n1<n2 && f1>f2)
  {
    return areElementsSorted(arr+1,size-1);
  }
  else
  {
    return 0;
  }
}


int main()
{
 int result,newResult;
 float array[SIZE] = {1.9,2.75,3.65,1.56};
 float *p;
 p = &array[0];
 result = areElementsSorted(p,SIZE);
 printf("%d",result);
  return 0;
}