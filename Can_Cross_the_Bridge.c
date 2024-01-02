#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int a=0;
    for(int i=x;i<=(z-y);i+=x)
    {
        a=a+1;
    }
    printf("%d",a);
}