#include <stdio.h>

  int input1(int p,int q,int a[20][20])
  {
    int i,j;
    printf("Enter the elements of the 1st array\n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("Enter the elemets a%d%d  ",i,j);
        scanf("%d",&a[i][j]);
      }
    }
  }
  int input2(int p,int q,int b[20][20])
  {
    int i,j;
    printf("Enter the elements of the 2nd array\n");
    for(i=0;i<p;i++)
    {
      for(j=0;j<q;j++)
      {
        printf("Enter the elemets b%d%d  ",i,j);
        scanf("%d",&b[i][j]);
      }
    }
  }
  int check(int a[20][20],int b[20][20],int m,int n,int r,int c)
  {
    int flag = 1;
    if(m == r && n == c)
    {
      printf("Arrays can be compared\n");
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
         if(a[i][j] != b[i][j])
         flag =0;
        }
      } 
  }
  else 
  printf("Arrays cannot be compared");
  if(flag == 1)
  printf("The two arrays are identical\n");
  else
  printf("The two arrays are unidentical\n");
  }
  int main()
  {
      int m,n,a[20][20],r,c,b[20][20];
      printf("Enter the number of rows and columns of 1st array\n");
      scanf("%d%d",&m,&n);
      printf("Enter the number of rows and columns of 2nd array\n");
      scanf("%d%d",&r,&c);
      input1(m,n,a);
      input2(r,c,b);
      check(a,b,m,n,r,c);
      
  return 0;
  }