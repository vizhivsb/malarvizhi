#include<stdio.h>
int main()
{
	char c;
	printf("enter a character\n");
	scanf("%c",&c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='z'))
	printf("%c is an alphabet",c);
	else
	printf("%c is not an alphabet",c);
	return 0;
}
