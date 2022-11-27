#include <stdio.h>
int main()
{
    int i,j,a,n;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=1;
        for(j=1;j<=i;j++){
            
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}