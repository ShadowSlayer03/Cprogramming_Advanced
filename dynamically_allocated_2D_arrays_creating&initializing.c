// Creating and initialising an ARRAY OF POINTERS //
// ARRAY OF POINTERS == Dynamically allocated 2D array // 
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a1 = 3; // Initialising integer //
  int arr1[4] = {1,2,3,4}; // Initialising array of integers //
  int* a2[4]; // Initialising array of pointers //
  int i;
  // Creating array of 4 rows and 3 columns dynamically
  for(i=0;i<4;i++)
    {
      a2[i] = (int*)calloc(3,sizeof(int));
      if(a2[i]==NULL)
      {
        printf("Allocation failed at %d",i);
        exit(1);
      }
    }
  //
  // Initialising array elements
  a2[1][0] = 34;
  a2[1][1] = 67;
  a2[1][2] = 90;
  a2[2][0] = 65;
  a2[3][1] = 456;
  // can also be done by scanf and taking from user
  printf("%d\n",a2[1][0]);
  printf("%d\n",a2[3][1]);
  printf("%d\n",a2[2][0]);
  return 0;
}