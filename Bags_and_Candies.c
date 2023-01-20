#include<stdio.h>
int main()
{
    int n,k,m,x;
    scanf("%d%d%d",&n,&k,&m);
    x=k*m;
    if(n%x==0)
    {
        printf("%d",n/x);
    }
    else
    {
        printf("%d",(n/x)+1);
    }
    
}