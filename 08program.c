#include<stdio.h>
int main()
{
    int A,B,C;
    printf("enter the age of A \n");
    scanf("%d",&A);
    printf("enter the age of B \n");
    scanf("%d",&B);
    printf("enter the age of C \n");
    scanf("%d",&C);
    if(A<B && A<C)
    {
        printf("A is the youngest one \n");
    }
    else if (A==B && A<C)
    {
        printf("A and B are younger than C\n");
    }
    else if(B==C && B<A)
    {
        printf("B and C are younger than A \n");
    }
    else if (C==A && C<B)
    {
        printf("A and C are younger than B \n");
    }
    else if(B<A && B<C)
    {
        printf("B is the youngest one \n ");
    }
    else 
    {
        printf("C is the youngest one \n");
    }
    return 0;
}