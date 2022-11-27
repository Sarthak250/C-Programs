#include <stdio.h>
int main()
{
    int i,j,n,sp,k;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    sp=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp-1;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            if(k==1||k==2*i-1||i==n){
                printf("*");
            }
            else 
            printf(" ");
        }
        sp--;
        printf("\n");
    }
   return 0;
}