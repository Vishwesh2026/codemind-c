#include<stdio.h>
#include<math.h>
int main()

{

double p,r,t,amt;
scanf("%lf %lf %lf",&p,&r,&t);
amt=p*pow((1+(r/100)),t);
printf("%.2lf",amt);

}