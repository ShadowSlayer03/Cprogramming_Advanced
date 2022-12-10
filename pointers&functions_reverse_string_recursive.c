#include<stdio.h>
#include<stdlib.h>

void swap(char *c1,char *c2)
{
  char temp;
  temp = *c1;
  *c1 = *c2;
  *c2 = temp;
}

int revArrRecursive(char *arr,int size)
{
  if(size>1)
  {
    swap(&arr[0],&arr[size-1]);
    revArrRecursive(arr+1,size-2);
  }
}

int main()
{
  int size,i;
  char *p;
  printf("Enter size of array\n");
  scanf("%d",&size);
  char arr[size];
  printf("Enter string\n");
  scanf("%s",arr);
  p = &arr[0];
  revArrRecursive(p,size);
  printf("%s",arr);
}