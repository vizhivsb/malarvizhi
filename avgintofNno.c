#include <stdio.h>
int main()
{
int b,sum=0,i;
scanf("%d",&b);
int a[b];
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);	
}
for(i=0;i<b;i++)
{
sum=sum+a[i];
}
int avg=sum/b;
printf("%d",avg);
return 0;
}
