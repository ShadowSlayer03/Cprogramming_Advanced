//Write a function that allocates a 2D array and pass by reference
#include<stdio.h>
#include<stdlib.h>

void create2Darray(int ***arr)
{
  int rows,columns,i;
  int** q;
  printf("Enter the no of rows\n");
  scanf("%d",&rows);
  printf("Enter the no of columns\n");
  scanf("%d",&columns);
  q = (int*)calloc(rows,sizeof(int));
  if(q==NULL) exit(1);
  for(i=0;i<rows;i++)
    {
      q[i] = (int*)malloc(sizeof(int) * columns);
    }
  q[0][0] = 1;
  q[1][1] = 1;
  q[2][2] = 1;
  q[3][3] = 1;
  *arr = q;
}
int main()
{
  int** result;
  create2Darray(&result);
  printf("%d",result[0][0]);
  printf("%d",result[1][1]);
  printf("%d",result[2][2]);
  printf("%d",result[3][3]);
  return 0;
}