#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        printf("%d ",j);
        printf("
");
    }
}