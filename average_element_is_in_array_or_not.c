#include<stdio.h>
int main()
{
    int x,i,flag=0,sum=0,avg;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
     for(i=0;i<x;i++)
     {
         sum=sum+a[i];
     }
     avg=sum/x;
       for(i=0;i<x;i++)
    {
    if(avg==a[i])
    {
        flag=1;
        break;
    }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");

}