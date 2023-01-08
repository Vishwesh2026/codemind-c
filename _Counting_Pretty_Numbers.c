#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t > 0)
    {
        if(t >= 1 && t <= 100)
        {
            int l, r, c = 0;
            scanf("%d %d", &l, &r);
            if(l >= 1 && l <= r && r <= (pow(10, 5)))
            {
                for(int i = l; i <= r; i++)
                {
                    if(i%10==2 || i%10==3 || i%10==9)
                        c++;
                }
                printf("%d
", c);
            }
        }
        t--;
    }
	return 0;
}