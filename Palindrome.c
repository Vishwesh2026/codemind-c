#include<stdio.h>
int main()
{
    int n,sum=0,r,n1;
    scanf("%d",&n1); 
    n=n1;
    while(n)
    {
        r=n%10;
        sum=(sum*10)+r;
        n/=10;
    }
    if(sum==n1)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    
    
}