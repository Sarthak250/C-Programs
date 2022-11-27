#include<stdio.h>
 
void main()
{
    char s1[100],s2[100];
    int a[26]={0}, b[26]={0}, c=0, flag=0;
     
    printf("\n Enter First String: ");
    gets(s1);
     
    printf("\n Enter Second String: ");
    gets(s2);
     
    while(s1[c] != '\0')
    {
        a[s1[c]-'a']++;
        c++;
    }
     wcoin
    c=0;
     
    while(s2[c] != '\0')
    {
        b[s2[c]-'a']++;
        c++;
    }
     
    for(c=0;c<26;c++)
    {
        if(a[c] != b[c])
            flag=1;
    }
     
    if(flag == 0)
    {
        printf("\n %s and %s are Anagram Strings.",s1,s2);
    }
    else
    {
        printf("\n %s and %s are not Anagram Strings.",s1,s2);
    }
}