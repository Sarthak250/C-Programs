#include <stdio.h>
int main()
{
    int i,j,n,k,l;
    char x;

     printf("Enter the number of rows\n");
    scanf("%d",&n); 
    for(i=1;i<n;i++){
        for(j=1;j<n-i;j++)
        {
            printf(" ");
        }
      x=65;
    for(k=1;k<=i;k++){
    
       printf("%c",x);
       x++;
    }
    for(l=2;l<=n;l--){
        printf("%c",x);
        x--;
    }

    printf("\n");
  }
}