#include <stdio.h>
int main()
{
  int a,b;
  float average;
  scanf("%d%d",&a,&b);
  average=(float)(a+b)/2;
  printf("Average of %d and %d is: %.2f",a,b,average);
  return 0;
}