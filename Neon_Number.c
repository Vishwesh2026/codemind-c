#include<stdio.h>
int main()
{
    int x,a,sum=0,r;
    scanf("%d",&x);
    a=x*x;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        sum=sum+r;
    }
    if(sum==x)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}