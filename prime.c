#include <stdio.h>
int main()
{
   int i,j,n,num,flag;
   printf("Enter number of times a loop run\n");
   scanf("%d",&num);
   for(i=1;i<=num;i++){
       printf("Enter numbers\n");
       scanf("%d",&n);
       flag=0;
       for(j=2;j<=n;j++){
           if(n%j==0)
           flag = flag + 1;
          continue;
       }
       if(flag==1)
       printf("%d is a prime number\n",n);
       else
       printf("%d is not a prime number\n",n);
    return 0;
   }
}