#include<stdio.h>
int main()
{
    int n,sum=0,a,r;
    scanf("%d",&r);
    n=r;
    while(n>0)
    {
        sum=(sum*10)+n%10;
        n=n/10;
    }
    if(sum==r)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}