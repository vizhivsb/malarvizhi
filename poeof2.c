#include<stdio.h>
int main()

{
int num;
int a,b;
 printf("Enter an integer number: ");
 scanf("%d",&num);
 a=num;
 b=0;
    while(a!=1)
       {
        if(a%2!=0)
        {
          b=1;
       break;
        }
        a=a/2;
    }
  
    if(b==0)
        printf("%d is a number that is the power of 2",num);
    else
        printf("%d is not the power of 2",num);
      
    return 0;
}
