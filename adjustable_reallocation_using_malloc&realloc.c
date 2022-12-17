// write a program that creates and fills dynamic array
// size of array is unknown. But when user inputs -1, the elements entered so far must be taken into the array
// function should return the array and pass its size

#include<stdio.h>
#include<stdlib.h>

int *adjRealloc() 
{
  int i=0,size=0;
  int *p;
  p = (int*)malloc(20*sizeof(int));
  if(p==NULL)
  {
    printf("allocation failed");
    exit(1);
  }
  printf("Enter the elements\n");
 while(p[i]!=(-1))
  {
    scanf("%d",&p[i]);
    if(p[i]==-1)
    {
      break;
    }
    i++;
    size++;       
  }
  p = (int*)realloc(p,size);
  for(i=0;i<size;i++)
    {
      printf("%d ",p[i]);
    }
  printf("\n");
  printf("Size is %d",size);
  return p;
}
int main()
{
  int *ans;
  ans = adjRealloc();
  return 0;
}