#include <stdio.h>
int main()
{
    FILE *p;
    char ch,c,a;
    int n,i;
    p = fopen("Data.txt","w+");
    if(p == NULL)
    printf("Error\n");
    else
    {
        printf("Enter the character to find:\n");
        scanf("%c",&a);
        printf(" Enter the contents in the file\n");
        while((ch = getchar()) != EOF)
        fputc(ch,p);
        rewind(p);
        
        printf("The entered content in the file are:\n");
        while((c = fgetc(p))!=EOF)
        {
            printf("%c   ",c);
        }
        rewind(p);
        printf("\nAll the locations of the character are: \n");
        while((c = fgetc(p))!=EOF)
        {
            
            if(c == a)
            {
                n = p+1;
                printf("%d  ",n);
            }
            
        }
        fclose(p);
    }
    return 0;
}
