#include <stdio.h>
  int fun_even(int a[],int);
  int fun_odd(int a[],int);
  int main()
  {
      int n;
     printf("Enter the length of the array\n");
     scanf("%d",&n);
    int i,a[n],even_sum,odd_sum;
    printf("\nEnter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      odd_sum=fun_odd(a,n);
      even_sum=fun_even(a,n);
     ("\nThe sum of od  printfd index is %d",odd_sum);
     ("\nThe sum of od  printfd index is %d",odd_sum);
     return 0;
}
int fun_even(int a[],int x)
{
    int i,sum_of_even=0;
    printf("\nThe numbers on even idexes of array are:  ");
    for(i=0;i<x;i++)
    {
        if(i % 2 == 0)
        {
            printf("%d  ",a[i]);
            sum_of_even +=a[i];
        }
    }
    return sum_of_even;
}
int fun_odd(int a[],int y)
{
    int i,sum_of_odd=0;
    printf("\nThe numbers on odd idexes of array are:  ");
    for(i=0;i<y;i++)
    {
        if(i % 2 != 0)
        {
            printf("%d  ",a[i]);
            sum_of_odd +=a[i];
        }
    }
    return sum_of_odd;
}