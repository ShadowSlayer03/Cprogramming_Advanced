// Array of Pointers to Functions
// Simple calculator
#include<stdio.h>
#include<stdlib.h>

void addition(int a, int b)
{
  printf("The result obtained after addition is %d",a+b);
}
void subtraction(int a, int b)
{
  printf("The result obtained after subtraction is %d",a-b);
}
void multiplication(int a, int b)
{
  printf("The result obtained after multiplication is %d",a*b);
}
void division(int a, int b)
{
  if(b!=0)
   printf("The result obtained after division is %d",a/b);
  else
    printf("Not possible");
}
void modulo(int a,int b)
{
  if(b!=0)
   printf("The remainder obtained after division is %d",a%b);
}
int main()
{
  void (*arrPointertoFunc[])(int,int) ={addition,subtraction,multiplication,division,modulo};
  int n1,n2,choice;
  printf("Enter the first no:\n");
  scanf("%d",&n1);
  printf("Enter the second no:\n");
  scanf("%d",&n2);
  printf("Enter the choice\n0- addition\n1- subtraction\n2- multiplication\n3- division\n4-remainder\n");
  scanf("%d",&choice);
  (*arrPointertoFunc[choice])(n1,n2);
  return 0;
}