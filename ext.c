#include<stdio.h>
#include<string.h>
int main()
{
    int n,pos,i,j;
    char a[50],b[50];
    printf("Enter the string\n");
    gets(a);
    printf("Enter the starting and ending points\n");
    scanf("%d%d",&n,&pos);
    for(i=0;a[i] != '\0';i++)
    {
        if(i>=n && i<=pos)
        b[i-n] = a[i];
    }
    b[i-n] = '\0';
    puts(b);
}