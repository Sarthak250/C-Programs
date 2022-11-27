#include <stdio.h>
#include<string.h>

int main()
{
    char a[30],b[10];
    gets(a);
    gets(b);
    int p;
    scanf("%d",&p);
    int l= strlen(b);
    for(int i=strlen(a);i>=p;i--)
    a[i+l] = a[i];
    for(int i=0;i<l;i++)
    a[p+i] = b[i];
    puts(a);
    return 0;
}