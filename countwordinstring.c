#include<stdio.h>
#include<string.h>
int main()
{
int i,count=1;
char s[100];
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
count+1;
}
printf("%d",count+1);
return 0;
}
