#include<stdio.h>
int main()
{
    int i,j,l;
    char a[50],t[30];
    printf("Enter the 1st string\n");
    gets(a);
    printf("Enter the 2nd string\n");
    gets(t);
    for(l=0;t[l] !='\0';l++);
    for(i=0,j=0;a[i] !='\0',t[j] != '\0';i++)
    {
        if(a[i] == t[j])
        j++;
        else 
        j=0;

    }
    if(j == l)
    printf("The index of the start of the substring is %d",i-j+1);
    else 
    printf("Substring not available");

  return 0;
}
