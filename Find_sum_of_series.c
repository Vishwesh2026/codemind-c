#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float r,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=1.0/i;
        sum=sum+r;
    }
    printf("%.2f",sum);
}