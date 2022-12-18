#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    while(n>0)
    {
        x=n%10;
        n=n/10;
        if(x%2==0 && n%2==0)
        {
            printf("Even");
            return 0;
        }
        else if(x%2==1 && n%2==1)
        {
            printf("Odd");
            return 0;
        }
        else
        {
            printf("Mixed");
            return 0;
        }
    }
}