#include<stdio.h>
#include<stdlib.h>

int i,j;
int **createLowerMatrix(int rows)
{
  int **p;
  p = (int*)malloc(rows*sizeof(int));
  for(i=0;i<rows;i++)
    {
      p[i] = (int*)calloc(i+1,sizeof(int));
    }
  printf("Enter values of lower array\n");
  for(i=0;i<rows;i++)
    {
      for(j=0;j<=i;j++)
        {
          scanf("%d",&p[i][j]);
        }
    }
  return p;
}

int **createUpperMatrix(int rows)
{
  int **q;
  int i;
  q = (int*)malloc(rows*sizeof(int));
  for(i=0;i<rows;i++)
    {
      q[i] = (int*)calloc(rows-i,sizeof(int));
    }
   printf("Enter values of upper array\n");
  for(i=0;i<rows;i++)
    {
      for(j=0;j<(rows-i);j++)
        {
          scanf("%d",&q[i][j]);
        }
    }
  return q;
}

void printLowerMatrix(int **p,int rows)
{
  for(i=0;i<rows;i++)
    {
      for(j=0;j<=i;j++)
        {
          printf("%d|",p[i][j]);
        }
      printf("\n");
    }
}
void printUpperMatrix(int **p,int rows)
{
  int count=0;
  for(i=0;i<rows;i++)
    {
      while(count!=i)
        {
          printf(" ");
          count++;
        }
      count = 0;
      for(j=0;j<rows-i;j++)
        {
          printf("%d|",p[i][j]);
        }
      printf("\n");
    }
} 
int main()
{
  int rows;
  int **arr1,**arr2;
  printf("Enter the rows of the matrix\n");
  scanf("%d",&rows);
  arr1 = createLowerMatrix(rows);
  arr2 =createUpperMatrix(rows);
  printf("The lower triangular matrix is\n");
  printLowerMatrix(arr1,rows);
  printf("\n");
  printf("The upper triangular matrix is\n");
  printUpperMatrix(arr2,rows);
  return 0;
}