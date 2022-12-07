#include<stdio.h>

void genericSwap(void *a,void *b,int size)
{
  void *temp;
  temp = malloc(size);

  // memcpy(void *dest,void *src,size)
  
  memcpy(temp,a,size);
  memcpy(a,b,size);
  memcpy(b,temp,size);
}

void main()
{
  int a=10,b=20;
  double l=23.4,m=67.8;
  
  printf("First no b4 swapping: %d\n",a);
  printf("Second no b4 swapping: %d\n",b);
  genericSwap(&a,&b,sizeof(int));
  printf("First no after swapping: %d\n",a);
  printf("Second no after swapping: %d\n",b);
  printf("\n");
  printf("First no b4 swapping: %.2lf\n",l);
  printf("Second no b4 swapping: %.2lf\n",m);
  genericSwap(&l,&m,sizeof(double));
  printf("First no after swapping: %.2lf\n",l);
  printf("Second no after swapping: %.2lf\n",m);
}