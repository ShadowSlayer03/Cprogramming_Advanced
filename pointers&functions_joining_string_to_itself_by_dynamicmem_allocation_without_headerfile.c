#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// Joining a string to the end of itself by using dynamic memory allocation
// Initial string was taken by dynamic mem allocation and then concatenated string was created by reallocation

char* strConcat(char* orgString,unsigned int length);
int i;
int main()
{
  char *p,*result;
  int length;
  p = (char*)calloc(20,sizeof(char));
  printf("Enter the string\n");
  scanf("%s",&p[0]);
  length = strlen(p);
  result = strConcat(p,length);
  for(i=0;i<(2*length)+1;i++)
    {
      printf("%c",result[i]);
    }
  return 0;
}

char* strConcat(char* orgString,unsigned int length)
{
  char *q;
  q = (char*)realloc(q,(2*length*sizeof(char))+1);
  if(q==NULL)
  {
    printf("Reallocation failed");
    exit(1);
  }
  for(i=0;i<length;i++)
    {
      q[length+i] = orgString[i];
    }
  q[length+i] = '\0';
  return q;
}