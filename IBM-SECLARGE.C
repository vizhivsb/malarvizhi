#include<stdio.h>
int main()
{
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b&&a<c)||(a<b&&a>c))
    {
    	printf("%d is a second largest no",a);
    }
    else if((b<a&&b>c)||(b>a&&b<c))
    {
    	printf("%d is a second largest no",b);
    }
    else if((c>a&&c<b)||(c<a&&c>b))
    {
    	printf("%d is a second largest no",c);
   
    }
    else
    {
    	printf("it is default");
    }
    return 0;
    }
