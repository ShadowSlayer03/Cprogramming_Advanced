#include<stdio.h>
#include<stdlib.h>

int main()
{
  FILE *fp;
  char filename[20];
  int freqAppearances[26];
  char currentChar;
  int j;
  printf("File Name:\n");
  scanf("%s",);

  
  fp = fopen(filename,"r");

  if(fp!=NULL)
  {
    printf("Success");
    printf("\n");
    
    while(!feof(fp))
      {
        currentChar=fgetc(fp);
        if(currentChar>='a' && currentChar<='z')
          freqAppearances[currentChar-'a']++; 
      }
  } 
   for(j=0;j<26;j++)
      {
        printf("%d\n",freqAppearances[j]);
      }
  
fclose(fp);
return 0;
}
