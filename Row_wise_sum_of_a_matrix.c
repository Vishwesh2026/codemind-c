#include<stdio.h>
int main()
{
    int r,c,i,j,k=0,arr[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        k=0;
        for(j=0;j<c;j++)
        {
            k=k+arr[i][j];
        }
        printf("%d ",k);
    }
    
}