#include <stdio.h>
int main()
{
    int num,i,j,k=0;
    printf("enter the number \n");
    scanf("%d",&num);
    while(num!=0)
    {
        i=num%10;
        k=k*10+i;
        num=num/10;
    }
    while(k>0)
    {
        j=k%10;
        if(j==9)
        {
            j=0;
        }
        else
        {
            j=j+1;
        }
        k=k/10;
        printf("%d",j);

    }
    
    
    return 0;
}