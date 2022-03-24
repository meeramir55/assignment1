//add 1 to every digit of a 5 digit number:
#include<stdio.h>
int main()
{
    int num,n1,n2,n3,n4,n5;
    printf("enter the 5 digit number \n");
    scanf("%d",&num);
    n5=num%10;
    num=num/10;
    n4=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n1=num%10;
    
    if (n1==9 )
    {
        n1=0;
    }
    else
    {
         n1=n1+1;
    }
    if (n2==9 )
    {
        n2=0;
    }
    else
    {
         n2=n2+1;
    }
    if (n3==9 )
    {
        n3=0;
    }
    else
    {
         n3=n3+1;
    }
    if (n4==9 )
    {
        n4=0;
    }
    else
    {
         n4=n4+1;
    }
    if (n5==9 )
    {
        n5=0;
    }
    else
    {
         n5=n5+1;
    }
    
    printf("number after adding 1 to every digit =%d%d%d%d%d",n1,n2,n3,n4,n5);
    return 0;

}
