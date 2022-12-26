#include<stdio.h>
int main()
{
    int cp,sp,total;
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
    total=sp-cp;
    printf("Profit");
    }
    else if(cp>sp)
    {
    total=cp-sp;
    printf("Loss");
    }
}