#include<stdio.h>
int main()
{
    int a,b,c,h=0;
    scanf("%d%d%d",&a,&b,&c,&h);
    if(a<b && a<c)
    {
        printf("%d",b+c);
    }
    else if (b<a && b<c)
    {
        printf("%d",a+c);
    }
    else if (c<a &&   c<b)
    {
        printf("%d",a+b);
        
    }
    
    
}