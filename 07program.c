//reverse a 4 digit number and compare to original :
#include <stdio.h>
int main()
{
    int num,n1,n2,n3,n4,rnum;
    printf("enter the 4 digit number \n");
    scanf("%d",&num);
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    n3=num%10;
    num=num/10;
    n4=num%10;
    num=(((n4*10+n3)*10+n2)*10+n1);
    rnum=(((n1*10+n2)*10+n3)*10+n4);
    printf("reverse of 4 digit number=%d\n",rnum);
    
    if(rnum>num)
    {
        printf("%d is greater than %d \n",rnum,num);
    }
    else if(num>rnum)
    {
        printf("%d is greater than %d \n",num,rnum);
    }
    else
    {
        printf("%d is equal to %d \n",num,rnum);
    }
    
    return 0;
}