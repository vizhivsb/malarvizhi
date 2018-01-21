#include<stdio.h>
int main()
{
  int start,end,a[20],i;
  printf("Enter the staring and ending intervals:");
  scanf("%d%d",&start,&end);
  for(i=start;i<=end;i++)
  {
    if(i%2!=0)
      printf("%d\n",i);
  }
  return 0;
}
