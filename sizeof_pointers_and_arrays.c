#include<stdio.h>
//Sizeof pointers and arrays
int main()
{
  int arr[10];
  printf("%d\n",sizeof(arr));
  int a=10;
  float b=20.8;
  double c = 56.78;
  //sizeof for integer pointer
  int *p;
  p =&a;
  printf("%d\n",sizeof(p));
  //sizeof for float pointer
  float *q;
  q = &b;
  printf("%d\n",sizeof(q));
  //sizeof for double pointer
  double *r;
  r = &c;
  printf("%d\n",sizeof(r));
  return 0;
}