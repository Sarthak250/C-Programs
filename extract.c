#include<stdio.h>
int main()
{
    int n,i;
    
    char a[50],b[50];
    printf("Enter the  string\n");
    gets(a);
    printf("Enter the starting and ending positions\n");
    scanf("%d",&n);
    if(strlen(a)-n>n)
    {
        for(i=0;i<n;i++)
        b[i]=a[n-1+i];
     b[i] = '\0';
        puts(b);
    return 0;
    }
}