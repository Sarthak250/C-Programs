#include <stdio.h>
int main()
{
    int i,n1,n2,max,lcm;
    printf("Enter the numbers\n");
    scanf("%d%d",&n1,&n2);
    printf("The lcm of the numbers %d and %d is \n",n1,n2);
    max=(n1>n2) ? n1 : n2;
    for(i=2;i<=max;i++){
        if(n1%i== 0 && n2%i== 0)
        lcm = i;
        break;
    }
    printf("%d",lcm);
  return 0;
}