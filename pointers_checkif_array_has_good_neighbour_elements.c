#include<stdio.h>
// Good neighbour = one num in array should be the sum of elements occuring before and after it

int checkNeighbour(int *p,int size)
{
  int j;
  for(j=1;j<size-1;j++)
    {
      if(p[j] == (p[j-1] +p[j+1]))
        return 1;
    }
  return 0;
}
int main()
{
  int size,i,result;
  printf("Size of array\n");
  scanf("%d",&size);
  int arr[size];
  printf("Enter elements of array\n");
  for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
  int *ptr = arr;
  result = checkNeighbour(ptr, size);
  printf("%d",result);
}