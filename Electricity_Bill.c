#include<stdio.h>
int main()
{
    int units;
    float amount,total_amount,surcharge,cpu;
    scanf("%d",&units);
    if(units<200)
    {
        amount=units*1.20;
        cpu=1.20;
    }
    else if(units>=200 && units<400)
    {
        amount=units*1.40;
        cpu=1.40;
    }
    else if(units>=400 && units<600)
    {
        amount=units*1.60;
        cpu=1.60;
    }
    else if(units>=600 && units<800)
    {
        amount=units*1.80;
        cpu=1.80;
    }
    else
    {
        amount=units*2.00;
        cpu=2.00;
    }
    if(amount>400)
    {
        surcharge=amount*0.15;
    }
    total_amount=amount+surcharge;
    printf("Units Consumed: %d
",units);
    printf("Cost per Unit: %0.2f
",cpu);
    printf("Bill: %0.2f
",amount);
    printf("Surcharge: %0.2f
",surcharge);
    printf("Total Amount: %0.2f
",total_amount);
    return 0;
}