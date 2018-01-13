#include<stdio.h>
void main()
{
int a,b,c;
printf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("a is big");
if((b>a)&&(b>c))
printf("b is big);
if((c>a)&&(c>b))
printf("c is big);
}
