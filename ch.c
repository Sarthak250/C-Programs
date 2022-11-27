#include <stdio.h>
int main()         
{
    char ch;
    printf("Enter the character");
    scanf("%c",&ch);
     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
     printf("The entered character %c is a vowel with ASCII value of %d",ch,ch);
     else
     printf("The entered character %c is a consonant and its ASCII value is %d ",ch,ch);
  return 0;
  
}