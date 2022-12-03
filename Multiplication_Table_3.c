#include<stdio.h>
int main()
{
    int a,b,i,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        sum=a*i;
    
        printf("%d x %d = %d
",a,i,sum);
    }
}