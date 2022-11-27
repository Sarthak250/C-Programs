#include <stdio.h>
int main()
{
    int i,n,flag,j;
    printf("Enter the number upto which prime number is to be checked\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        flag=0;
      for(j=2;j<=n;j++){
        if(i%j==0)
           flag = flag + 1;
          continue;
       }
      if(i==1)
      printf("1 is neither a prime nor a composite number\n");
     else if(flag==1)
       printf("%d is a prime number\n",i);
       else
       printf("%d is not a prime number\n",i);
    }
    return 0;
}