#include <stdio.h>
int main()
{
int base,exp;
long long result=1;
printf("enter the base no:");
scanf("%d",&base);
printf("exp");
scanf("%d",&exp);
while(exp!=0)
{
	result *=base;
	--exp;
}
printf("answer=%11d",result);
return 0;
}
