//program to find the value of one number raised power by another number:
#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,result;
    printf("enter the two numbers \n");
    scanf("%d%d",&num1,&num2);
    result=pow(num1,num2);
    printf("the value of first number (%d) after raised power by second number(%d) =%d \n",num1,num2,result);
    return 0;
}