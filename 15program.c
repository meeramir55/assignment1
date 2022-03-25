//program to print armstrong numbers from 1-500:
#include<stdio.h>
int main()
{
    int i,num,sum,r;

    for (i=0;i<=500;i++)
    {
        num=i;
        sum=0;
        while(num!=0)
        {
            r=num%10;
            sum=sum+(r*r*r);
            num=num/10;
        }
        if(i==sum)
        {
            printf("%d is a armstrong number \n",i);
        }

    }
return 0;
}
