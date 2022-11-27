#include <stdio.h>
int main()
{
    int i,j,n,pr;
    printf("Enter number to print prime factors: ");
    scanf("%d",&n);
    printf("ALL PRIME FACTORS of %d are:\n",n);
    for(i=2;i<=n;i++){
       if(n%i==0)
       {
          pr=1;
          for(j=2;j<=i/2;j++){
             if(i%j==0){
                 pr=0;
                 break;
             }
          }
          if(pr==1)
          printf("%d\n",i);
       }
    }
    return 0;
}