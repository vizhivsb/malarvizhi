#include<stdio.h>
int main() 
{
 int f1=0,f2=1,f,n,i;
 scanf("%d",&n);
 printf("%d%d",f1,f2);
 for(i=1;i<=n-1;i++)
{     
f=f1+f2;
f1=f2;
f2=f;
printf("%d",f);
}
return 0;    
}
