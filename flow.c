#include<stdio.h>
#include<string.h>

int main()
{
    int i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    char b = getchar();
    char a[n];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i] >=65 && a[i]<= 90)
        a[i] +=32;
        else if(a[i] >=97 && a[i]<= 122)
        a[i] -=32;
    }
    puts(a);

    return 0;
}