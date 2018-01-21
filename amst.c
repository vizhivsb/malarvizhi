#include<stdio.h>
int main()
{
	int no,sum=0,s,r;
	while(no>0)
	{
		r=no%10;
		s=r*r*r;
		sum=s+sum;
		no=no/10;
	}
if(no==sum)
{
	printf("amstrong number");
	else
	printf("it is not an amstrong number");
}
return o;
}
