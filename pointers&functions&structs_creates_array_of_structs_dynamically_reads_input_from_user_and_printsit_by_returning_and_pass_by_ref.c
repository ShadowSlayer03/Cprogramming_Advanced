//Write 2 functions that:
// First fn gets size of array, allocates memory dynamically,reads input from user and returns the array
// Second fn(void type) gets size of array, allocates memory dynamically,reads input from user and updates it by "pointer"

#include<stdio.h>
#include<stdlib.h>

typedef struct employee
{
 float age;
 int id;
 char name[10];
}Employee;

Employee* initArrayElements(Employee* emp,unsigned int size)
{
  int i;
  for(i=0;i<size;i++)
    {
      printf("Enter the name of employee %d\n",i+1);
      scanf("%s",emp[i].name);
      printf("Enter the id of employee %d\n",i+1);
      scanf("%d",&emp[i].id);
      printf("Enter the age of employee %d\n",i+1);
      scanf("%f",&emp[i].age);
    }
  return emp;
}
void printArray(Employee* emp,unsigned int size)
{
  int i;
  for(i=0;i<size;i++)
    {
      printf("The name of employee is %s\n",emp[i].name);
      printf("The id of employee is %d\n",emp[i].id);
      printf("The age of employee is %.1f\n",emp[i].age);
    }
}
Employee* allocArrwithReturn(unsigned int size)
{
  Employee* emp;
  emp =  (Employee*)calloc(size,sizeof(Employee));
  initArrayElements(emp,size);
  return emp;
}
void allocArrwithoutReturn(unsigned int size,Employee **arr)
{
  Employee* empArr;
  empArr =  (Employee*)calloc(size,sizeof(Employee));
  initArrayElements(empArr,size);
  *arr = empArr;
}


int main()
{
  int size;
  printf("Enter the no of employees\n");
  scanf("%d",&size);
  Employee* result;
  // allocArrwithoutReturn(size,&result);
  // printArray(result,size);
  result = allocArrwithReturn(size);
  printArray(result,size);
}