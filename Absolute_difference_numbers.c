
#include<stdio.h>
int main()
{
    int n,m,i,d,s=0,k=0,temp,p=0,z,t=0,w=0;
    scanf("%d%d",&n,&m);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        t=t*10+d;
    }
    n=temp;
    for(i=0;i<m;i++)
    {
        d=n%10;
        n=n/10;
        s=s*10+d;
    }
    while(s!=0)
    {
        d=s%10;
        s=s/10;
        k=k*10+d;
    }
   for(i=0;i<m;i++)
   {
       d=t%10;
       t=t/10;
       w=w*10+d;
   }
  if(w>k)
  {
      z=w-k;
      printf("%d",z);
  }
  else
  {
      z=k-w;
      printf("%d",z);
  }
   return 0;
}
