#include <stdio.h>
int main()
{
    FILE *p,*q,*r;
    char ch,c;
    p=fopen("Data.txt","w+");
    q=fopen("vowel.txt","w");
    r=fopen("consonant.txt","w");
    if(p == NULL||q == NULL || r == NULL)
    printf("Error\n");
    else
    {
        while((ch = getchar())!=EOF)
        fputc(ch,p);
        rewind(p);
         while(c=fgetc(p)!=EOF)
         {
            printf("%c",c);
            if(c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'||c == 'A'|| c == 'E'||c == 'I'|| c== 'O'|| c== 'U')
            fputc(c,q);
            else
            fputc(c,r);
         }
         fclose(p);
         fclose(q);
         fclose(r);
         
    }

    return 0;
}