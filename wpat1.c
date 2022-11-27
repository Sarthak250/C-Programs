#include <stdio.h>
int main()
{
    int i,j,n,k,l;
    char x;

     printf("Enter the number of rows\n");
    scanf("%d",&n); 
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
          printf(" ");
        }
      x=64;
        for(k=1;k<=i;k++)
        {
          x++;
          printf("%c",x);
        }
         for(l=1;l<i;l++)
         {
          x--;
          printf("%c",x);   
         }
    printf("\n");
    }
       for(i=2;i<n;i++){
        x=64;
        for(j=1;j<i;j++)
        printf(" ");
        for(k=0;k<n-i;k++)
        {
            x++;
            printf("%c",x);
        }
        for(l=1;l<n-i;l++)
        {
             x--;
            printf("%c",x);
        }
        printf("\n");
    }
  return 0;
}
