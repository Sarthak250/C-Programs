#include <stdio.h>
  void read_array(int arr[20][20],int m,int n)
  {
    printf("\nEnter the elements of the array\n");
    for(int i=0;i<m;++i)
    {
      for(int j=0;j<n;++j)
      {
        printf("Enter the elements a%d%d: ",i+1,j+1);
        scanf("%d",&arr[i][j]);
      }
    }
    printf("\nThe inputed array is\n");
    for(int i=0;i<m;++i)
    {
      for(int j=0;j<n;++j)
      {
        printf("%d ",arr[i][j]);
        if(j == m-1)
        printf("\n");
      }
    }
  }
  void trans_array(int arr[20][20],int m,int n)
  {
    int trans[20][20];
     for(int i=0;i<m;++i)
     {
       for(int j=0;j<n;++j)
       {
          trans[j][i]=arr[i][j];
       }
     }
     printf("\nThe transpose of the matrix is:\n");
     for(int i=0;i<m;++i)
     {
       for(int j=0;j<n;++j)
       {
         printf("%d  ",trans[i][j]);
         if(j == m-1)
         printf("\n");
       }
     }
  }
  int main()
  {
      int m,n,arr[20][20];
      printf("Enter the number of rows and columns\n");
      scanf("%d%d",&m,&n);
      read_array(arr,m,n);
      trans_array(arr,m,n);

       return 0;
  }