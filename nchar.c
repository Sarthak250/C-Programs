#include <stdio.h>
int main()
{
    FILE *p,*r,*q;
    char c,ch;
    int n;
    p=fopen("alpha.txt","w+");
    q=fopen("vowel.txt","w");
    r=fopen("consonant.txt","w");
    if(p == NULL||q == NULL||r == NULL)
     printf("Error\n");
    else 
    { 
        printf("Enter the number of elements\n");
        scanf("%d",&n);
        printf("Enter the characters\n");
        for(int i=0;i<n;i++)
        {
            scanf("%c",&c);
            putc(c,p);
        }
        rewind(p);
        for(int i=0;i<n;i++)
        {
            ch=fgetc(p);
            printf("%c",ch);
            if((ch >='A' && ch<='Z') || (ch>='a' && ch <='z'))
            {
                if(ch =='A'||ch =='a'|| ch=='E'||ch =='e'||ch =='I'||ch =='i'||ch =='O'||ch =='o'|| ch=='U'||ch =='u')
                putc(ch,q);
                else
                putc(ch,r);
            }

        }
        
    }

    return 0;
}