//weather a number is armstrong or not:
#include<stdio.h>
#include<math.h>
int main()
{
    int num,num2,newnum=0,remainder,remainder2,x=0,n=0;
    printf("enter the number \n");
    scanf("%d",&num);
    num2=num;
    while(num!=0)
    {
        remainder=num%10;
        newnum=newnum*10+remainder;
        num=num/10;
        n++;
    }
    while(newnum!=0)
    {
        remainder2=newnum%10;
       
        x+=pow(remainder2,n);

        newnum=newnum/10;   
    }
    
   if(x==num2)
   {
       printf("the entered number is a armstrong number \n");
   }
   else
   {
       printf("the entered number is not a armstrong number \n");
   }

    return 0;
}