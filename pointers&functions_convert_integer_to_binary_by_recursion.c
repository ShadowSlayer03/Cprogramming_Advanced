// Create a recursive function that takes an integer
// It should give the binary of the integer value

#include<stdio.h>
#include<stdlib.h>

int binary(int* decimal)
{
    if(*decimal==0)
    {
        return 0;
    }
    int d = *decimal/2;
    return (*decimal)%2+10*(binary(&d));
}
int main()
{
    int num;
    printf("Enter the integer\n");
    scanf("%d",&num);
    printf("%d",binary(&num));
    return 0;
}