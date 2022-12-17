#include<stdio.h>
int main()
{
    int n,a,i,sum=0;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        sum=sum*10+n%10;
        n=n/10;
    }
    if(a==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}