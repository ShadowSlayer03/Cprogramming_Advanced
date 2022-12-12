// Code to print element and no of its occurrences in an array
#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

void printFreqNum(int *arr) 
{
  int count = 0, i, j,k;
  for (i = 0; i < SIZE; i++)
  {
    for (j = 0; j < SIZE; j++) 
    {
      if((arr[i] == arr[j]) && j<i)
      {
        break;
      }
      if (arr[i] == arr[j])
      {
        count++;
      }
    }
    if(j>i)
    {
     printf("%d occurred %d times\n", arr[i], count);
     count = 0;
    }
  }

}
void main() 
{
  int arr[] = {1, 2, 3, 2, 3,2};
  int *p = arr;
  printFreqNum(p);
}