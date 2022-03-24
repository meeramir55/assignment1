#include <stdio.h>
int main()
{
    int length , breadth;
    printf("enter the length of the rectaingle \n");
    scanf("%d",&length);
    printf("enter the breadth of the rectaingle \n");
    scanf("%d",&breadth);
    int area =length*breadth;
    int perimeter=2*(length+breadth);
    printf("area of the rectaingle = %d \n",area);
    printf("perimeter of the rectaingle =%d \n",perimeter);
    return 0;
}