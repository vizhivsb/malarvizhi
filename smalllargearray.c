#include<stdio.h>
int main()
{
    int i,n,l,s,element;
    printf ("Enter the number of elements\n");
    scanf ("%d", &element);
    scanf ("%d", &n);
    l=n;
    s=n;
    for (i=1; i<= element -1 ; i++)
    {
      
        scanf ("%d",&n);
        if (n>l)
        l=n;
        if (n<s)
        s=n;
    }
    printf (" The largest number is %d\n", l);
    printf (" The smallest number is %d\n", s);
    return 0;
}
