// Develop a fn that receives two strings of lowercase letters and their sizes.
// Repetitive characters not allowed in string1.
// The function should return 1 if all the letters of the first sequence appear in the second sequence. Otherwise return 0.
// We're only checking if letters appear,not necessary to be sub-string.

#include<stdio.h>
#include<stdlib.h>
int i,j;

int checkChars(char* arr1,char* arr2,int size1,int size2)
{
  int flag=0;
  for(i=0;i<size1;i++)
    {
      for(j=0;j<size2;j++)
        {
          if(arr1[i]==arr2[j])
          {
            flag=1;
            break;    
          }  
        }
      if(flag==1)
        printf("The letter '%c' is present in 2nd string\n",arr1[i]);
      else
      {
        return 0;        
      }
      if(i==(size1-1))
      {
        break;  
      }
      flag=0;
    }
   if(flag==1)
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
  result = checkChars(p,q,s1,s2);
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