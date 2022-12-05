#include<stdio.h>
int main()
{
    int x,y,s,d,p,q,r;
    scanf("%d%d",&x,&y);
    s=(x+y);
    d=(x-y);
    p=(x*y);
    q=(x/y);
    r=(x%y);
    printf("Sum:%d
Difference:%d
Product:%d
Quotient:%d
Remainder:%d",s,d,p,q,r);
}