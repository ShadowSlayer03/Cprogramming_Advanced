#include<stdio.h>
#include<stdlib.h>

void ageFun(int age)
{
  printf("Your age is %d",age);
}
int main()
{
  int age;
  printf("Enter your age\n");
  scanf("%d",&age);
  void (*agePtr)(int);
  agePtr = ageFun;
  // ageFun(age); // normal fn call
  (agePtr)(age); // fn call by pointer
  return 0;
}