#include <stdio.h>

  int main()
  {
      int i,n;
      printf("Enter the length of array");
      scanf("%d",&n);
      int a[n];
       printf("Enter the elements");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
      printf("The even elements of the array are-\n");
      for(i=0;i<n;i++)
      {
         if(a[i] %2 == 0)
         printf("%d   ",a[i]);
      }
      printf("\n The even elements of the array are-\n");
      for(i=0;i<n;i++)
      {
         if(a[i] %2 != 0)
         printf("%d   ",a[i]);
  }
  }