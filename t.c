#include <stdio.h>
  void input_array(int arr[20][20],int m,int n)
  { 
      printf("Enter the elements of the array\n");
      for(int i=0;i<m;i++)
  {
      for(int j=0;j<n;j++)
      {
          scanf("%d",&arr[i][j]);
      }
  }
  }
  int check_array(int arr[20][20],int m,int n,int num)
  { 
      int c=0;
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(arr[i][j] == num)
             {
                 printf("Match found\n");
                 c++;
                 return c;
             }
         }
     }
     printf("Match not found\n");
     return -1;
  }
  
  void check();
  int main()
  {
      int m,n,arr[20][20],num;
      printf("Enter the number of rows and columns\n");
      scanf("%d%d",&m,&n);
      printf("Enter the number to be searched in the array");
      scanf("%d",&num);
  
      input_array(arr,m,n);
     int a= check_array(arr,m,n,num);
      return 0;
}