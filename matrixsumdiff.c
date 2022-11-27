#include <stdio.h>
 
 void a1(int a[20][20],int m,int n)
 {
     printf("Enter the elements of the 1st matrix:\n");
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             printf("\nEnter the elements a%d%d  ",i,j);
             scanf("%d",&a[i][j]);
         }
     }
 }
 void a2(int a[20][20],int m,int n)
 {
     printf("Enter the elements of the 2nd matrix:\n");
     for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {
             printf("\nEnter the elements a%d%d  ",i,j);
             scanf("%d",&a[i][j]);
         }
     }
 }
 int sum(int a[20][20],int b[20][20],int m,int n,int m1,int n1)
 {  
     int result[20][20];
    if(m == m1 && n == n1)
    {
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               result[i][j] = a[i][j] + b[i][j];
           }
       }
    }
    else 
    printf("\nThe matrix cannot be added");

    printf("The added Matrix is:\n");
      for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               printf("%d ",result[i][j]);
               if(j==m-1)
               {
                   printf("\n");
               }
           }
       }
 }
 int diff(int a[20][20],int b[20][20],int m,int n,int m1,int n1)
 {  
     int result[20][20];
    if(m == m1 && n == n1)
    {
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               result[i][j] = a[i][j] - b[i][j];
           }
       }
    }
    else 
    printf("\nThe matrix cannot be subtracted");

    printf("The subtracted Matrix is:\n");
      for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               printf("%d ",result[i][j]);
               if(j==m-1)
               {
                   printf("\n");
               }
           }
       }
 }
 int product(int a[20][20],int b[20][20],int m,int n,int m1,int n1)
 {
      int result[20][20];
       if(m == m1 && n == n1)
    {
       for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               int sum = 0;
               for(int k=0;k<m;k++)
               {
                   sum = sum +a[i][k]*b[k][j];
               }
               result[i][j] = sum;
           }
       }
    }
    else 
    printf("\nMultiplication cannot be done");

    printf("The multiplicated matrix is:\n");
     for(int i=0;i<m;i++)
       {
           for(int j=0;j<n;j++)
           {
               printf("%d ",result[i][j]);
               if(j==m-1)
               {
                   printf("\n");
               }
           }
       }
 }
 int main()
 {
     int a[20][20],b[20][20],m,n,m1,n1;
     printf("Enter the number of rows and columns of 1st Matrix\n");
     scanf("%d%d",&m,&n);
      printf("Enter the number of rows and columns of 2nd Matrix\n");
     scanf("%d%d",&m1,&n1);
     a1(a,m,n);
     a2(b,m1,n1); 
       sum(a,b,m,n,m1,n1);
       diff(a,b,m,n,m1,n1);
       product(a,b,m,n,m1,n1);
     return 0;
 }