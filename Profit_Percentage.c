#include<stdio.h>
int main()
{
    int cp,sp;
    float a,b;
    scanf("%d%d",&cp,&sp);
    a=sp-cp;
    b=(a/cp)*100;
    printf("%.2f",b);
}
