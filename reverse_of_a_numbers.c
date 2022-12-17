#include<stdio.h>
int main()
{
    int a,n,i,s=0;
    scanf("%d",&n);
    while(n!=0)
    {   
        a=n%10;
        s=s*10+a;
        n=n/10;
    }
    printf("%d",s);
}