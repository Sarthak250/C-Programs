#include<stdio.h>

int comp(char a[],char b[])
{
    int i,j,k;
    for(k=0;a[k]!='\0';k++);
    for( j =0;b[j] != '\0';j++);
    while(a[i] != '\0'&& b[i] != '\0')
    {
        if(a[i] != b[i])
        {
            return 0;
        }
      i++;
    }
    if(i == j && k == i)
    return 1;
    
}
int main()
{
    char a[50],b[50];
    gets(a);
    gets(b);

    int i= comp(a,b);
    if(i==1)
    printf("Equal");
    else 
    printf("Not equal");

    return 0;
}