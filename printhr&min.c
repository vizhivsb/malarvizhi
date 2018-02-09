#include <stdio.h>
int main() 
{
	int totmin;
	int hour,min;
	scanf("%d",&totmin);
	hour=totmin/60;
	min=totmin%60;
	printf("the hour is %d\n",hour);
	if(totmin%60==0)
	{
	printf("the minutes is 0" );
	}
	else
	{
	printf("the minutes is %d",min);
	}
	return 0;
}
