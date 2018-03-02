#include <stdio.h> 
int main() 
{  
 int day;  
 printf("Enter the day number: \n");  
 scanf("%d", &day); 
 switch(day)
 {
  case 1 :  printf("Monday is a hoilday\n");
            printf("yes\n");
            break;
  case 2 :  printf("Tuesday is a hoilday\n");
            printf("yes\n");
            break;
  case 3 :  printf("Wednesday is a hoilday\n");
            printf("yes");
            break;
  case 4 :  printf("Thursday is a hoilday\n");
            printf("yes\n");
            break;
  case 5 :  printf("Friday is a hoilday\n");
            printf("yes\n");
            break;
  case 6 :  printf("Saturday is a hoilday\n");
            printf("yes\n");
            break;
  case 7 :  printf("Sunday is a hoilday\n");
            printf("yes\n");
            break;
  default: printf(" no Holiday");          
    }
 return 0;
}
