#include<stdio.h>
void main()
{
	int n,sum=1;
	printf("enter the no");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("factorial of a no is%d",sum);
}
