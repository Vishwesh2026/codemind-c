#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    while(x>0)
    {
        i=x%10;
        printf("%d",i);
        x=x/10;
    }
    
}