#include <stdio.h>  
  
int main() {  
    int counter,n; 
    scanf("%d",&n);
    printf("Even numbers between 1 to n\n");  
    for(counter = 1; counter <= n; counter++)
    {
        if(counter%2 == 0)
        {
            printf("%d ", counter);  
        }  
    }  
  
    return 0;  
} 
