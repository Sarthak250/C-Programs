#include<stdio.h>
int main()
{
    FILE *p;
    char c,ch;
    p=fopen("Data.txt","w");
    if(p == NULL)
    printf("Error\n");
    else
    {
        printf("Enter the character\n");
        scanf("%c",&ch);
        fputc(ch,p);
        fclose(p);
        
    }
        p=fopen("Data.txt","r");
        if(p == NULL)
        printf("Error\n");
        else
        {
        c=fgetc(p);
        printf("%c",c);
        fclose(p);
        }
    return 0;
}