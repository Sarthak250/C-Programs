#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("Enter the string\n");
    gets(a);
    for(i=0;*(a+i)!='\0';i++)
    {
        if(*(a+i) == 'a' || *(a+i) == 'A' || *(a+i) == 'e' || *(a+i) == 'E' || *(a+i) == 'i' || *(a+i) == 'I' || *(a+i) == 'o' || *(a+i) == 'O' || *(a+i) == 'u' || *(a+i)=='U')
        *(a+i) = '$';
        else 
        continue;
    }
    puts(a);

    return 0;

}