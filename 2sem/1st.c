#include <stdio.h>
#include <string.h>
int main()
{
    char c[50],ch[20];
    int n,l,p;
    printf("Enter the string\n");
    gets(c);
    printf("Enter the substring\n");
    gets(ch);
    printf("Enter the position to enter the substring\n");
    scanf("%d",&n);
    
    l=strlen(ch);
    p=strlen(c);
    for(int i=p;i>=n;i--)
    {
        c[i+l] =c[i];
    }
    for(int i=0;i<l;i++)
    {
        c[n+i] = ch[i];
        
    }
    puts(c);
  return 0;
}