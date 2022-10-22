#include<stdio.h>
#include<stdlib.h>
#include<math.h>

// count = total no of digits of ksq //
// n = total no of digits of k //
int main()
{
    int n,k,ksq,i,count=1,tenthPower;
    int sum;
    int left,right;
    scanf("%d",&k);
    
    ksq = pow(k,2);
    
    for(i=1;i<=10;i++)
    {   
        if(ksq/(10*i)!=0)
        {
            count++;
        }

        tenthPower = pow(10,i);
        
        if(ksq>=1 && ksq<=9)
        {
            n = i;
          break;
        }
        
        else if(ksq>=tenthPower && ksq<=9+(9*tenthPower))
        {
            n = i;
            break;
        }
        else
        {
          break;  
        }
        
    }
    
   left = ksq/(pow(10,count-n));
   if(ksq==1)
   {
      right=0; 
   }
   else
   {
       right = ksq%(int)(pow(10,n));
   }   
   sum = left+right;
   
   if(sum==k)
   {
       printf("Kaprekar Number");
   }
    else
    {
        printf("Not A Kaprekar Number");
    }
    
    return 0;
}