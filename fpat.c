#include<stdio.h>
int main()
{
    int i,m=0,n;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       m=m+4;
       printf("%d",m);
       m=m*10;
       printf("\n");
    }
}
