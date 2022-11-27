#include <stdio.h>

  int main()
  {
      int n,i,max,min;
      printf("Enter the length of array\n");
      scanf("%d",&n);
      int a[n];
      printf("Enter the elements  ");
      for(i=0;i<n;i++)
      {
          scanf("%d",&a[i]);
      }
        max=a[0];
        min=a[0];
      for(i=1;i<n;i++)
      {
          if(max<a[i])
          max=a[i];
          if(min>a[i])
          min=a[i];
      }
      printf("The maximum element of the array is %d \n The minimum elements of the array is %d",max,min);
  }