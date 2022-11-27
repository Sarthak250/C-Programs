#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l;
    char a[100];
    printf("Enter the string\n");
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i] == ' ' || a[i] =='\t')
        {
             for(j=i;j<l;j++)
             a[j] = a[j+1];
             
        l--;
        }
    }
    printf("The new string is %s",a);

    return 0;
}