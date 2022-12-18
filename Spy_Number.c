#include<stdio.h>
int main()
{
    int a,n,s=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        s=s+a;
        p=p*a;
        n=n/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}