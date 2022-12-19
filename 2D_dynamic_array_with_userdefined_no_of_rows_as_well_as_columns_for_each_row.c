// Create a 2D dynamically allocated array whose rows are also user-defined along with the no of columns in each row
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int **p;
  int rows,columns,i;
  printf("Enter the no of rows\n");
  scanf("%d",&rows);
  p = (int**)calloc(rows,sizeof(int*));
  for(i=0;i<rows;i++)
    {
      printf("Enter columns for ROW %d\n",i+1);
      scanf("%d",&columns);
      p[i] = (int*)malloc(columns*sizeof(int));
    }
  p[0][0] = 45;
  p[1][0] = 67;
  p[2][0] = 234;
  p[3][0] = 678;
  
  printf("%d\n",p[0][0]);
  printf("%d\n",p[1][0]);
  printf("%d\n",p[2][0]);
  printf("%d\n",p[3][0]);
  printf("%d\n",p[3][3]);
  return 0;
}