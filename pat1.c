#include <stdio.h>
int main()
{
    int a,i,j,k,n,l;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
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
    for(i=1;i<=n;i++){
        a=0;
        for(j=1;j<=i;j++)
        printf(" ");
        for(k=0;k<n-i;k++)
        {
            a++;
            printf("%d",a);
        }
        for(l=1;l<n-i;l++)
        {
             a--;
            printf("%d",a);
        }
    printf("\n");   
    }
   return 0;
}