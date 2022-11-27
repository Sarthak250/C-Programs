#include <stdio.h>
 
  int max(int);
  int main()
  {
      int n;
      printf("Enter the number of elements in the array\n");
      scanf("%d",&n);
      int maximum=max(n);
      printf("\nThe second largest number of the array is %d  ",maximum);
      return 0;
  }
  int max(int x)
  {
      int i,a[x],max1,max2;
       printf("\nEnter the elements:  ");
      for(i=0;i<x;i++)
      {
          scanf("%d",&a[i]);
      }
      max1=max2=a[0];
      for(i=1;i<x;i++)
      {
          if(a[i] > max1)
          {
              max2=max1;
              max1=a[i];
          }
          else if(a[i] > max2 && a[i] < max1)
          {
              max2=a[i];
          }
      }
    return max2;
  }