//Create a function that takes a string and returns its length
//Implementation of "strlen" without string.h and using pointers 
#include<stdio.h>
#include<stdlib.h>

int strlength(char *p)
{
  int i;
  for(i=0;p[i]!='\0';i++);
  return i;
}
int main()
{
  char str1[10];
  printf("Enter the string 1:\n");
  scanf("%s",str1);
  char* str2;
  str2 = malloc(10*sizeof(char));
  printf("Enter the string 2:\n");
  scanf("%s",&str2[0]);
  int result = strlength(&str1[0]);
  printf("Size of string 1 is %d\n",result);
  result = strlength(&str2[0]);
  printf("Size of string 2 is %d\n",result);
  return 0;
  
}