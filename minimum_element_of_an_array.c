#include<stdio.h>
int main()
{
    int x,i,min;
    scanf("%d",&x);
    int a[x];
    min=99999;
    for(i=0;i<x;i++)
    { 
        scanf("%d",&a[i]);
        if(a[i]<min)
        {
            min=a[i];
        }
    }
        printf("%d",min);
}