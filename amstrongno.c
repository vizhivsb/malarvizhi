#include<stdio.h>
void main()
{
	int num,digit,temp,sum=0;
	printf("enter the num");
	scanf("%d",&num);
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		sum=sum+digit*digit*digit;
		temp=temp/10;
	}
	if(num==sum)
	{
	printf("number %d is amstrong ",num);
	}
	else
	{
	printf("number %d is not an amstrong",num);
	}
}
