#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && i%2==1)
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}