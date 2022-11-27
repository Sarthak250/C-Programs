#include <stdio.h>
  void fun(int);
   int main()
   {
      int n;
      printf("Enter the length of array\n");
      scanf("%d",&n);
      fun(n);
   }
   void fun(int x)
   {
       int max,a[x],min,i;
       printf("Enter the elements\n");
       for(i=0;i<x;i++)
       {
          scanf("%d",&a[i]);
       }
       max=a[0];
       min=a[0];
       for(i=1;i<x;i++)
       {
           if(max<a[i])
           {
               max=a[i];
           }
           if(min>a[i])
           {
               min=a[i];
           }
       }
       printf("The maximum element of the array is -  %d\nThe minimum element of the array is -  %d",max,min);
   }