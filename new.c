#include <stdio.h>
int i=10;
int main()
{
int i=5;
{
    int i=20;{
        i=i+2;
        printf("%d",i);
    }
    i=i-5;
 printf("%d",i);
 }
 i=i*2;
 printf("%d",i);
 return 0;
}