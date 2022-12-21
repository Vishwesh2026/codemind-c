#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,n,s=0;
    scanf("%d",&n);
    {
        // Sum of the squares of the
    // first n natural numbers is
    a = (n * (n + 1) * (2 * n + 1)) / 6;
     
    // Sum of n naturals numbers
    b = (n * (n + 1)) / 2;
 
    // Square of k
    b = b * b;
    }
    c=abs(a-b);
    printf("%d",c);
    
}