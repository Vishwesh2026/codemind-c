#include<stdio.h>
#include<math.h>
int main()
{
    double n;
    int d;
    scanf("%lf",&n);
    d=log10(n)+1;
    if(d==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}