#include<stdio.h>
int main()
{
int min,a,b;
scanf("%d",&min);
a=min%60;
b=min/60;
printf("%d Hour(s) %d Minute(s)",b,a);
return 0;
}