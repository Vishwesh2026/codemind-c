#include<stdio.h>
int main()
{
    int n,i,r,temp,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        s=0;
        while(a[i]!=0)
        {
            r=a[i]%10;
            s=s*10+r;
            a[i]=a[i]/10;
        }
        if(temp==s)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
    }
}