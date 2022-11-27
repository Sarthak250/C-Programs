#include <stdio.h>
int main()
{
    int rev=0,rem,*m,n,*p;
    p=&n;
    m=&rev;
    printf("Enter the number:\n");
    scanf("%d",p);
    while(*p != 0)
    {
        rem = *p%10;
        *m = (*m*10)+rem;
        *p = *p/10;
    }
    printf("The reversed number is: %d",*m);

    return 0;
}