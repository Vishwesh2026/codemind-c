#include<stdio.h>
int main()
{
    int n,j,i,k,r;
    scanf("%d",&n);
    if(n>=3)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
           
        }
         printf("
");
    }
        for(k= n-1;k>=1;k--)
        {
            for(r=1;r<=k;r++)
            {
            printf("*");
            
          }
          printf("
");
        }
    }
    else
    {
        printf("The pattern is not possible");
}
}