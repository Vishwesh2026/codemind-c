#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(a+b*2>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}