#include<stdio.h>
int main()
{
    int x,i,sum=0;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(i=0;i<x;i++)
    {
        if(i%2==0)
        sum=sum+a[i];
    }
    printf("%d",sum);
    
    
}