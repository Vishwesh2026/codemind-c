#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
          s=s+a[i];
        }
        else
        {
            d=d+a[i];
        }
    }
    printf("%d",abs(s-d));
    
}