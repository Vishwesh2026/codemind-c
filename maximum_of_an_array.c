#include<stdio.h>
int main()
{
    int x,i,max;
    scanf("%d",&x);
    int a[x];
    max=-99999;
    for(i=0;i<x;i++)
    { 
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
        printf("%d",max);
}