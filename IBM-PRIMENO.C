#include<stdio.h>
int main()
{
int count=0,n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
		count++;
	}
            }
            if(count==2)
            {
	printf("it  is prime no");
            }
             else
             {
	printf( "it is not a prime");
              }

return 0;
}
