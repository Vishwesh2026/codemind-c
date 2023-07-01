#include<stdio.h>
int linear_search_recursive(int a[],int n,int i,int s)
{
   if(i==n) 
	 {
	 return -1;
	 }
   if(a[i]==s) 
	 {
		return i;
	 }
   return linear_search_recursive(a,n,i+1,s);
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);	
	}
	int s;
	{
		scanf("%d",&s);
	}
	int result=linear_search_recursive(a,n,0,s);
	if(result == -1)
	{
	printf("False");
	}
	else
	{
	printf("True");
	}
}