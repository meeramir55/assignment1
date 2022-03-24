//print 1-100 and obdure at multiples of 3:
#include <stdio.h>
int main()
{
    int i;
    for (i=1;i<=100;i++)
    {
        if (i%3==0)
        {
            printf("obdure : ");
        }
        else
        {
        printf("%d : ",i);
        }
    }   

    
    return 0;
}