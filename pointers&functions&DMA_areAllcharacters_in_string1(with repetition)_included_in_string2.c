// Develop a fn that receives two strings of lowercase letters and their sizes.
// Repetitive characters are allowed in string1.
// The function should return 1 if all the letters of the first sequence appear in the second sequence. Otherwise return 0.
// We're only checking if letters appear,not necessary to be sub-string.

#include<stdio.h>
#include<stdlib.h>
int i,j;

int allCharsincluded(char* arr1,char* arr2,int size1,int size2)
{
  int i;
  int countArr[26]={0};
  // Building a counting array for characters in string2
  for(i=0;i<size2;i++)
    countArr[arr2[i]-'a']++;
  // Removing all appearances of all characters in string1
  for(i=0;i<size1;i++)
    countArr[arr1[i]-'a']--;
  // Checking if there's any negative number to indicate that not all characters of string1 is included in string2
  for(i=0;i<26;i++)
    {
      if(countArr[i]<0)
        return 0;
    }
  return 1;
}
int main()
{
  char* p;
  int s1,s2;
  int result;
  printf("Enter the size of first string\n");
  scanf("%d",&s1);
  p = (char*)calloc(s1+1,sizeof(char));
  printf("Enter the first string\n");
  scanf("%s",&p[0]);
  char* q;
  printf("Enter the size of the second string\n");
  scanf("%d",&s2);
  q = (char*)calloc(s2+1,sizeof(char));
  printf("Enter the second string\n");
  scanf("%s",&q[0]);
  result = allCharsincluded(p,q,s1,s2);
  if(result==1)
  {
    printf("All the elements are present");
  }
  else
  {
    printf("All the elements are not present");
  }
  return 0;
  
}