// Create a 2D dynamically allocated array that takes the no of columns from the user for each row and implements it
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int rows=4,columns,i;
  int* arr[rows];
  for(i=0;i<rows;i++)
    {
      printf("Enter columns for ROW %d\n",i+1);
      scanf("%d",&columns);
      arr[i] = (int*)malloc(columns*sizeof(int));
    }
  arr[0][0] = 45;
  arr[1][0] = 67;
  arr[2][0] = 234;
  arr[3][0] = 678;
  
  printf("%d\n",arr[0][0]);
  printf("%d\n",arr[1][0]);
  printf("%d\n",arr[2][0]);
  printf("%d\n",arr[3][0]);
  printf("%d\n",arr[3][3]);
  return 0;
}