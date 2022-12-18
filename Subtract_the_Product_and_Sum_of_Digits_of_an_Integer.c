#include<stdio.h>
int main()
{
    int n,r,x,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        product=product*r;
        n=n/10;
    }
    x=product-sum;
    printf("%d",x);
}