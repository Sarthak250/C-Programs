#include<stdio.h>
   #include<string.h>
   void main()
    {
       int i;
       FILE *f;
       char s1[20],s[20],a;
       
       printf("Enter the content: ");
       gets(s);
       printf("\n");
       printf("Enter the character :");
       scanf("%c",&a);
       printf("\n");
       f=fopen("file.txt","w");
       if(f==NULL)
       {
           printf("Error");
       }
       fputs(s,f);
       fclose(f);
       f=fopen("file.txt","r");
       if(f==NULL)
       {
           printf("Error");
       }
       fgets(s1,strlen(s)+1,f);
       fclose(f);
       
       puts(s1);
          
       for(i=0;s1[i]!='\0';i++)
       {
            if(s1[i]==a)
           {
	   printf("Character found at position :  ");

               printf("%d ",i+1);
           }
        }
   }
