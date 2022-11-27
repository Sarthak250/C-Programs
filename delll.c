#include <stdio.h>
#include<string.h>

int main()
{
    char a[30];
    int n,pos;
    printf("Enter the string\n");
    gets(a);
    printf("Enter the position\n");
    scanf("%d",&pos);
    scanf("%d",&n);
    for(int i=pos;i<strlen(a);i++)
    a[i] = a[i+n];
    puts(a);

    return 0;
}