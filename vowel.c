#include<stdio.h>
int main()
{
int a,b;
printf("enter an alphabet");
scanf("%c",&c);
a=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
b=(c=='A'||c=='E'||c=='I'||c=='O'||C=='U');
if(a||b)
printf("%c is a vowel",c);
else
printf("%c is a constant",c);
return 0;
}
