#include<stdio.h>
int main()
{
 float bs,da,hra,pf,gr;
 scanf("%f%f%f",&bs,&da,&hra);
 pf=(bs*12)/100;
 gr=bs+pf+da+hra;
 printf("%.2f
%.2f",pf,gr);
}
