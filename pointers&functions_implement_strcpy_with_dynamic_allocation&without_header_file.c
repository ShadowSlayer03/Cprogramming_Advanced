//Create a function that takes a string and copies it to another string
//Implementation of "strcpy" without string.h and using pointers 
#include<stdio.h>
#include<stdlib.h>

char* strCopy(char* p)
{
  int i;
  char* q;
  q = (char*)calloc(10,sizeof(char));
  for(i=0;p[i]!='\0';i++)
    {
      q[i] = p[i];
    }
  q[i] = '\0';
  return q;
}
int main()
{
  char* a;
  char* result;
  a = (char*)calloc(10,sizeof(char));
  printf("Enter string 1\n");
  scanf("%s",&a[0]);
  result = strCopy(a);
  printf("The copied string b is %s",result);
  return 0;
}