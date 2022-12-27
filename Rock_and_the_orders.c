#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,total1=0,total2=0;
    scanf("%d%d",&d,&c);
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    total1=a1+a2+a3;
    total2=b1+b2+b3;
    if(total1>=150 && total2>=150)
    {
        if((total1+total2+d+d)>(total1+total2+c))
        printf("YES");
        else
        printf("NO");
    }
    else if((total1>=150 && total2<150)||(total1<150 && total2>=150))
    {
        if((total1+total2+d+c)<(total1+total2+d+d))
        printf("YES");
        else
        printf("NO");
    }
    else
    printf("NO");
    return 0;
}