//Develop a recursive fn
// receives both an array and its size
// returns avg value of the array

#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

float sum=0;
int average;

float avg(int *arr, int size)
{
  if(size==0)
  {
    return average;
  }
  sum = sum + (float)*arr;
  avg(arr+1,size-1);
  average = sum/size;
}

int main()
{
int result;
int array[SIZE] = {23,456,678,345};
int *p;
p = &array[0];
printf("%.2f",avg(p,SIZE));
return 0;
}