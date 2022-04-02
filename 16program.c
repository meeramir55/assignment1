#include<stdio.h>
int main()
{
    int num,i,positive=0,negative=0,zeros=0;
    
    printf("how many numbers you want to enter \n");
    scanf("%d",&num);
    int array[num];
    for(i=0;i<num;i++)
    {
        printf("no.%d:",i+1);
        scanf("%d",&array[i]);
        if (array[i]>0)
        {
            positive++;
        }
        else if(array[i]<0)
        {
            negative++;
        }
        else
        {
            zeros++;
        } 

    }
    printf("total positive numbers entered =%d \n",positive);
    printf("total negative numbers entered =%d \n",negative);
    printf("total zeros entered =%d \n",zeros);
    return 0;
}