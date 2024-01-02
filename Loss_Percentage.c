#include<stdio.h>
int main()
{
    int cp,sp;
    float a,b;
    scanf("%d%d",&cp,&sp);
    a=cp-sp;
    b=(a/cp)*100;
    printf("%.2f",b);
}