#include <stdio.h>
int main()
{
    int i,n,pr;
    printf("Enter the number \n");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        pr=i*n;
        printf("%d X %d = %d",n,i,pr);
        printf("\n");
    }
    return 0;
}