// Create a 2D dynamically allocated array whose rows are also user-defined along with the no of columns in each row
#include<stdio.h>
#include<stdlib.h>

void print2Darray(int **p,unsigned int rows,unsigned int columns)
{
  int i,j;
  for(i=0;i<rows;i++)
    {
      for(j=0;j<columns;j++)
        {
          printf("%10d",p[i][j]);
        }
    }
}
int **allocate2Dmatrix(unsigned int rows,unsigned int columns)
{
  int i;
  int **p;
  p = (int**)calloc(rows,sizeof(int*));
  for(i=0;i<rows;i++)
    {
      p[i] = malloc(columns*sizeof(int));
    }
  return p;
}
void freeMatrix(int **p,int rows)
{
  int i;
  for(i=0;i<rows;i++)
    {
      free(p[i]);
    }
  free(p);
}
int main()
{
  int **p;
  int rows,columns;
  printf("Enter the no of rows\n");
  scanf("%d",&rows);
  printf("Enter the no of columns\n");
  scanf("%d",&columns);
  allocate2Dmatrix(rows,columns);
  print2Darray(p,rows,columns);
  p[0][0] = 45;
  p[1][0] = 67;
  p[2][0] = 234;
  p[3][0] = 678;
  
  printf("%d\n",p[0][0]);
  printf("%d\n",p[1][0]);
  printf("%d\n",p[2][0]);
  printf("%d\n",p[3][0]);
  printf("%d\n",p[3][3]);
  freeMatrix(p,rows);
  return 0;
}