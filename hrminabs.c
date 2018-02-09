#include <stdio.h>
int main() 
{
	int h1,m1,h2,m2,min1,min2,totmin1,totmin2,sub,result1,result2;
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	min1=h1*60;
	min2=h2*60;
	totmin1=min1+m1;
	totmin2=min2+m2;
	sub=totmin1-totmin2;
	result1=sub/60;
	printf("%d\t",result1);
	result2=sub%60;
	if(result2==0)
	{
	printf("0");
	}
	else
	printf("%d",result2);
	return 0;	
	}
