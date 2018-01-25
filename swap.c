#include<stdio.h>
void swap(int*,int*)
void main()
{
	int a=10,b=20;
	printf("before swap values %d%d\n",a,b);
	swap(&a,&b);
	printf("after swap values %d%d\n",a,b);
}
int swap(int*x,int*y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
	printf("swap values%d%d\n",*x,*y)
}
