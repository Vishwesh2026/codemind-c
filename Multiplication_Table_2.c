#include<stdio.h>
int main()
{
    int a,b,i,sum;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        sum=a*i;
    
        printf("%d x %d = %d
",a,i,sum);
    }
}