#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    i=2;
    while(n/(2*i))
    {
        if(n%i==0)
        {
            count++;
            break;
        }
        i++;
    }
    if(count)
    printf("Not Prime");
    else
    printf("Prime");
}