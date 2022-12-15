#include<stdio.h>
int main()
{
    int x,y,i,s;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        if(i%2!=0)
        {
            s=x*i;
            printf("%d x %d = %d
",x,i,s);
        }
    }
}