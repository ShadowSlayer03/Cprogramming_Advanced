#include<stdio.h>
#include<string.h>

#define SIZE 20

char *strrev(char *str[SIZE])
{
  char revString[SIZE];
  int i,j;
  char *tempPtr;
  tempPtr = str;
  for(i=0;i<SIZE;i++)
    {
      for(j=(SIZE-1);j>=0;j--)
      str[i] = revString[j];
    }
  printf("%s",revString);
  return tempPtr;
}

int main()
{
  char word[SIZE];
  char reverseStr[SIZE];
  char *tempResult;
  fgets(word,SIZE,stdin);
  printf("%s",word);
  tempResult = strrev(word);
  if(word==reverseStr)
  {
    printf("Its a palindrome");
  }
  else
    printf("Its not a palindrome");
  return 0;
}