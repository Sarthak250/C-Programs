#include <stdio.h>

  int main()
  {
      int i,n;
      printf("Enter the length of array\n");
      scanf("%d",&n);
      int a[n];
      printf("Enter the elements  ");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      printf("The reversed array is-  ");
      for(i=n-1;i>=0;i--)
      {
          printf("%d  ",a[i]);
      }
  }