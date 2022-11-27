#include <stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("Enter the number of rows \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
         printf(" ");
          for(k=1;k<=i;k++){
           printf("%d",k);
          }
           for(l=k-2;l>0;l--){
           printf("%d",l);
          }
          printf("\n");
    
    }
    return 0;
}