#include<stdio.h>
int main()
{
	int num;
	int temp;
	scanf("%d",&num);
	int sum = 0;
	for(int i = 1; i < num; i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;
		}
	}
	if(num < sum)
	{
		printf("ABUNDANT");
	}
	else if(num>sum)
	{
		printf("DEFICIENT");
	}
		else
		{
		    printf("PERFECT");
		}
	return 0;
}