#include <stdio.h> 
int main()
{
    int a, b, c;
    scanf("%d",&a);
    b = a/365; 
    c = (a % 365)/7;
    a = a-((b*365) + (c*7));
    printf("%d
%d",b,c);
  
}