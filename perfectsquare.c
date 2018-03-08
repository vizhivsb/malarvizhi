#include <stdio.h>
int main(void) 
{
int a,b,c;
scanf("%d%d",&a,&b);
c=a*b;
if(c/a==a)
printf("%d is the perfect square",c);
else
printf("%d is not the perfect square",c);
return 0;
}
