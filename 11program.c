//program to find weather a number is prime or not:
#include<stdio.h>
int main()
{
    int num,i,prime=0;
    printf("enter the number \n");
    scanf("%d",&num);
    if (num==0 ||num==1)
    prime=0;
    for (i=2;i<num;i++)
    {
        if(num%i==0)
        {
            prime=1;  
            break;
        }
        
    }
    if(prime==0)
    {
         printf("%d is a prime number \n",num);
    }
    else
    {
         printf("%d is not a prime number \n",num);
    }
    return 0;

}