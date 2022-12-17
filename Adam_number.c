#include<stdio.h>
int main()
{
    int x,y,p,a=0,b=0,n;
    scanf("%d",&n);
    x=n*n;
    while(n!=0)
    {
        p=n%10;
        n=n/10;
        a=a*10+p;
    }
    y=a*a;
    while(y!=0)
    {
        p=y%10;
        y=y/10;
        b=b*10+p;
    }
    if(b==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}