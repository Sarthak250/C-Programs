#include<stdio.h>
int main()
{
    int i,n=0;
    char a[50];
    printf("Enter the array\n");
    gets(a);
    
    for(i=0;*(a+i)!='\0';i++)
    {
        if(*(a+i) == ' ')
        n++;
        else if(*(a+i) == '\t')
        n = n+4;

    }
     printf("the length of the string including whitespaces is %d\n",i);
     printf("the length of the string excluding whitespaces is %d\n",(i-n));
   return 0;
}