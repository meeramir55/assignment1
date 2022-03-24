#include <stdio.h>
int main(){
    int a,b,t;
    printf("enetr the value of a and b \n");
    scanf("%d %d",&a,&b);
    printf("value of a before swap = %d \n",a);
    printf("value of b before swap =%d \n",b);
    t=a;
    a=b;
    b=t;
    printf("value of a after swap =%d \n",a);
    printf("value of b after swap =%d \n",b);
    return 0;
}