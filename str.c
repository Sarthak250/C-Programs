#include <stdio.h>
void strong(int);
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    strong(x);
 return 0;
}
void strong(int m){
     int n,j,i,p,fact=1,sum=0;
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
printf("The entered number %d is a strong number",m);
else
printf("The entered number %d is not a strong number",m);
}