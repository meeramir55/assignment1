//sum of digits of a number:
#include<stdio.h>
int main()
{
    int n,r,sum =0;
    printf("enter the 4  number \n");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;

    }
    printf("the sum of the 4 digit number is =%d \n",sum);
    return 0;
}