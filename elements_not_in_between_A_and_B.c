#include<stdio.h>
int main()
{
    int n,i,x,y,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]>=x && a[i]<=y)
        {
            continue;
        }
        else
        
        {
        c++;
         printf("%d ",a[i]);
       }
    }
    if(c==0)
    {
        printf("-1");
    }
    return 0;
}
