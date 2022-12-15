#include<stdio.h>
int main()
{
    int a=0,b=1,x,n;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    n=n-2;
    while(n>0)
    {
        x=a+b;
        a=b;
        b=x;
        printf("%d ",x);
        n=n-1;
    }

}