#include<stdio.h>
int main()
{
    int area,p,o,l,b,w,c,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    p=l*b;
    o=(l+(2*w))*(b+(2*w));
    area=o-p;
    cost=area*c;
    printf("%d",cost);
}