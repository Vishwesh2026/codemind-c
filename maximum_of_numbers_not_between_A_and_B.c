#include<stdio.h>
int main()
{
    int n,i,x,y,max=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<x || a[i]>y)
        {
            if(a[i]==max)
            {
                printf("%d",a[i]);
            }
        }
        else if(a[i]>=x && a[i]<=y)
        {
            if(a[i]==max)
            {
                c++;
            }
        }
    }
    if(c>=1)
    {
        printf("-1");
    }
}