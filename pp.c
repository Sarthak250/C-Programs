#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    
}