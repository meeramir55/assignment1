//sum of the digits of a 4 digit number:
#include <stdio.h>
int main()
{
    int num,n1,n2,n3,n4 ,sum;
    printf("enter the 4 digit number \n");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    sum=n1+n2+n3+n4;
    printf("the sum of the 4 digit number = %d \n",sum);
    return 0;

}