#include<stdio.h>
int main()
{
    int n,x,y,z,temp,s=0,k=0,i,r=0;
    scanf("%d",&n);
    temp=n;
    x=n*n;
    while(n!=0)
    {
        y=n%10;
        n=n/10;
        s++;
    }
    for(i=0;i<s;i++)
    {
        y=x%10;
        x=x/10;
        k=k*10+y;
    }
    while(k!=0)
    {
        y=k%10;
        k=k/10;
        r=r*10+y;
    }
    if(r==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}