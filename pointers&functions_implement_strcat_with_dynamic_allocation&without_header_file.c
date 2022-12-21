//Create a function that takes a string and returns its length
//Implementation of "strlen" without string.h and using pointers 
#include<stdio.h>
#include<stdlib.h>

char* strConcat(char* p, char* q)
{
  int l1,l2,i,j;
  for(l1=0;p[l1]!='\0';l1++);
  for(l2=0;q[l2]!='\0';l2++);
  char* longStr;
  longStr = (char*)calloc((l1+l2+1),sizeof(char));
  for(i=0;i<l1;i++)
    {
      longStr[i] = p[i];
    }
  for(j=0;j<l2;j++)
    {
      longStr[i+j] = q[j];
    }
  longStr[i+j] = '\0';
  return longStr;
}
int main()
{
  int l;
  char str1[10],str2[10];
  printf("Enter string 1\n");
  scanf("%s",str1);
  printf("Enter string 2\n");
  scanf("%s",str2);
  char* a = str1;
  char* b = str2;
  char* result = strConcat(a,b);
  printf("The concatenated string is %s",&result[0]);
  return 0;
}