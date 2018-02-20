#include <stdio.h>

int main(void) 
{
	char a[10];
	int i,n;
	scanf("%s",a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
