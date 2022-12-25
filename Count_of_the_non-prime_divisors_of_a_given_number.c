#include<stdio.h>
int main()
{
    int n,c=0,k=0,i,j,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
            for(j=1;j<=n;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                s++;
            }
        }
    }
    printf("%d",s);
}