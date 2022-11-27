#include <stdio.h>
#include <math.h>
void arm(int);
int main() 
{
   int a;
   printf("Enter the number\n");
   scanf("%d",&a);
   arm(a);
 return 0;
}
void arm(int num)
{
   int result =0, originalNum, remainder, n = 0;

   originalNum = num;

   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      result += pow(remainder, n);
   }

   if (result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
}
  
