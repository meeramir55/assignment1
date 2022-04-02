//program to find the factorial of any number:
#include<stdio.h>
int main()
{
    int num,i,factorial=1;
    printf("enter the number of which you want to find a factorial! \n");
    scanf("%d",&num);
    for(i=2;i<=num;i++)
    {
        factorial=factorial*i;
        
    }
    printf("%d is the factorial of %d \n",factorial,num);
    return 0;
}