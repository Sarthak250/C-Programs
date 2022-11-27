#include <stdio.h>
void sum();
void sum()
{
    int a,b,s;
    printf("Enter the numbers\n");
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("%d",s);
}
int main()
{
    sum();
    return 0;
}