#include<stdio.h>
int main()
{
    FILE *p,*q;
    char a[100],ch;
    p = fopeN("Data.txt","w+");
    if(p == NULL)
    printf("Error\n");
    else
    {
        printf("Enter the string\n");
        do
        {
           fgets(a,100,stdin);
           fputs(a);
        } while (*a != '\n');
        
    }
}