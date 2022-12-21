#include<stdio.h>
#include<stdlib.h>

int main()
{
  //struct
  typedef struct point
  {
  int x;
  int y;
  }Point;

  //struct within struct
  typedef struct circle
  {
  Point center;
  double radius;
  }Circle;

  Point p1= {9,10};
  Circle c1;
  c1.center = p1;
  c1.radius = 34.5;
  printf("%d\n",c1.center.x);
  printf("%d\n",c1.center.y);
  printf("%.2lf\n",c1.radius);
  return 0;
}