#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
    scanf("%d",&n);
    for(i='A';i<=('A'-1)+n;i++)
    {
        for(j='A';j<=('A'-1)+n;j++)
        printf("%c ",i);
        printf("
");
    }
}