#include<stdio.h>
int main()
{
    int a,b,h;
    float area;
    scanf("%d%d%d",&a,&b,&h);
    area=h*(a+b)*0.5;
    printf("%.4f",area);
}