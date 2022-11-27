#include <stdio.h>
int main()
{
    int m,n,j,i,p,fact=1,sum=0;
    printf("Enter the number \n");
    scanf("%d",&m);
    n=m;
  
    while(n!=0)
    {
      p=n%10;
    fact=1;
    for(j=1;j<=p;j++)
     {
       fact= fact * j;
     }  
      sum=sum + fact;
      n=n / 10;
    }
if(sum == m)
printf("The entered number %d is a strong number",sum);
else
printf("The entered number %d is not a strong number",sum);
return 0;
}