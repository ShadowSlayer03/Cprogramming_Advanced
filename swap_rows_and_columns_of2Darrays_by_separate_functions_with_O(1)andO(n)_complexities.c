//Implement 2 functions that receive a dynamic 2d array 
//a. first function should receive 2 rows and swap b/w the two rows in O(1). Make it a universal function
//b. Second function should receive 2 columns. The function should swap b/w the 2 columns in O(N)

//O(n) -- looping
//O(1) -- no looping 

#include<stdio.h>
#include<stdlib.h>

void swapRows(void **p,int row1,int row2) //universal
{
  void* temp; 
  temp = p[row1];
  p[row1] = p[row2];
  p[row2] = temp;
}

void swapColumns(int **p,int col1,int col2,int totalRows) //non-universal
{
  int i,temp;
  for(i=0;i<totalRows;i++)
    {
      temp = p[i][col1];
      p[i][col1] =  p[i][col2];
      p[i][col1] = temp;
    }
}

int main()
{
  int rows,columns,i;
  printf("Enter no of rows of array\n");
  scanf("%d",&rows);
  printf("Enter no of columns of array\n");
  scanf("%d",&columns);
  int* arr[rows];
  for(i=0;i<rows;i++)
    {
      arr[i] = (int*)malloc(columns*sizeof(int));
    }
  swapRows(&arr[0],1,2);
  swapColumns(&arr[0],1,2,rows);
  return 0;
}