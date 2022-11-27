#include <stdio.h>
int main()
{
    int a,i,product;
    printf("Enter the number to whose table is to be shown");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
     {
         product=a*i;
         printf("%d X %d = %d \n",a,i,product);
     }
    
     return 0;
}