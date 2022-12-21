#include<stdio.h>
#include<stdlib.h>
#define SIZE 4

int main()
{
  int i;
  //declaring struct
  typedef struct point
  {
   int x;
   int y;
  }Point;

  //declaring array of struct
  Point arrayofPoints[SIZE];

  //Taking elements from user
  for(i=0;i<SIZE;i++)
    {
      printf("Enter the X coordinate at position %d\n",i+1);
      scanf("%d",&arrayofPoints[i].x);
      printf("Enter the Y coordinate at position %d\n",i+1);
      scanf("%d",&arrayofPoints[i].y);
    }

  //Printing the elements taken 
  for(i=0;i<SIZE;i++)
    {
      printf("The coordinate at position %d is ",i+1);
      printf("(%d,%d)\n",arrayofPoints[i].x,arrayofPoints[i].y);
    }   
  
  return 0;
}