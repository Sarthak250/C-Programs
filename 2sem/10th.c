#include <stdio.h>
int main()
{
    int n,m,i;
    FILE *p,*q,*r;
    p = fopen("integer.txt","r");
    q = fopen("prime.txt","w");
    r = fopen("nonprime.txt","w");
    if(p == NULL || q == NULL || r == NULL)
    printf("Error\n");
    else
    {
    
    printf("The entered elements in the file are:\n");
    while((m=getw(p))!=EOF)
    {
        printf("%d  ",m);
        if(m== 0 || m == 1)
        putw(m,r);
        for(i=2;i<m/2;i++)
        {
            if(m % i == 0)
            putw(m,q);
            else
            putw(m,r);
        }
    }
    printf("The prime integers are:\n");
    while((m=getw(q))!=EOF)
    {
        printf("%d  ",m);
    }
    printf("The non prime integers are:\n");
    while((m=getw(r))!=EOF)
    {
        printf("%d  ",m);
    }
    fclose(p);
    fclose(q);
    fclose(r);
    }
    return 0;
}
