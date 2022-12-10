#include<stdio.h>
#define SIZE 7
void revArray(char *p,int size,char *q)
{
  int i;
  for(i=0;i<size;i++)
    {
      q[i] = p[size-i-1];
    }
  q[i] = '\0';
}

int main()
{
  char name[SIZE];
  char revName[SIZE];
  char *p = name;
  char *q = revName;
  printf("Enter the name\n");
  scanf("%s",name);
  revArray(p,SIZE,q);
  printf("The reversed name is %s",revName);
  return 0;
}