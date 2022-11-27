#include <stdio.h>
int main()
{
   int n,days,mnth,yr,week;
   printf("Enter the number of days");
   scanf("%d",&n);
   if(n >= 365){
      yr = n / 365;
      n = n % 365;
   }
   if(n >= 30){
       mnth = n / 30;
       n = n % 30;
   }
   if(n >= 7){
       week = n / 30;
       n = n % 7;
   }
   if(n < 7) 
   days = n;
   printf("The entered number of days has %d years %d months %d weeks and %d days",yr,mnth,week,days);

return 0;
}