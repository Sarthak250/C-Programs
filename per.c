#include <stdio.h>
void percent();
void percent()
{
     int a,b,c,d,e;
    printf("Enter the marks");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   double per;
   per=(a+b+c+d+e)/5;
   printf("%lf",per);
}
int main(){
   
    percent();
  return 0;
}