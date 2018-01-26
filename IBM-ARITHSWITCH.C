#include<stdio.h>
int main()
{
	int a,b;
            char ch;
	scanf("%d\t%d\n",&a,&b);
            scanf("%c",&ch);
            switch(ch)
	{
		case'+':
			printf("%d",a+b);
			break;
		case'-':
			printf("%d",a-b);
			break;
		case'*':
			printf("%d",a*b);
			break;
		case'/':
			printf("%d",a/b);
			break;
		default:
			printf("it is not an arithmetic program");
	}
	return 0;
}
	
