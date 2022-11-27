#include <stdio.h>

 void freq(int);
 int main()
 {
     int n;
     printf("Enter the length of the array\n");
     scanf("%d",&n);
     freq(n);
     return 0;
 }
 void freq(int x)
 {
     int i,a[x],count,freq[x],j;
     printf("\nEnter the elements ");
     for(i=0;i<x;i++)
     {
       scanf("%d",&a[i]);
       freq[i]=-1;
     }
     for(i=0;i<x;i++)
     {
        count=1;
        for(j=i+1;j<x;j++)
        {
            if(a[i] == a[j])
            {
                count++;
                freq[i]=0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i]=count;
        }
     }
     printf("\nThe frequency of all the elements in the array are: \n");
     for(i=0;i<x;i++)
     {
         if(freq[i] !=0)
         {
             printf("%d occurs %d times\n",a[i],freq[i]);
         }
     }
 }