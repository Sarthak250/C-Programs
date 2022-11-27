#include <stdio.h>
int main()
{
    int num,i,n,max,min,num1;
    printf("Enter the number till it checks :\n");
    scanf("%d",&n);
    printf("Enter the first number\n");
    scanf("%d",&num);
    max=num;
    min=num;
    for(i=1;i<=n;i++){
        printf("Enter number:\n");
        scanf("%d",&num1);
        if(max<num1)
        max=num1;
        if(min>num1)
        min=num1;
    }
    printf("The maximum of the given numbers is %d and the minimum is %d",max,min);
 return 0;
}