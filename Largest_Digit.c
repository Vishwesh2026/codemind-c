#include<stdio.h>
int main()
{
    int n,r,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r>sum)
        {
            sum=r;
        }
    }
    printf("%d",sum);
}