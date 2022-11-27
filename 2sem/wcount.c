#include <stdio.h>
int main()
{
    FILE *p;
    char a[100],c;
    int count = 0;

    p = fopen("Input.txt","w+");
    if(p == NULL)
    printf("ERROR\n");
    elseb
    {
        printf("Input the string\n");
        gets(a);
        fputs(a,p);
        rewind(p);
        while((c= getc(p))!= EOF)
        if(c == ' ' || c == '\n')
        count++;
        printf("The number of words in the file are : %d",count+1);
        fclose(p);
        
    }
    return 0;
}