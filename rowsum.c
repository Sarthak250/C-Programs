#include <stdio.h>

 void print(int arr[20][20],int m,int n)
 {
    printf("Enter the elements of the matrix \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element a%d%d  ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The inputed matrix is\n");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d  ",arr[i][j]);
            if(j == m-1)
            printf("\n");
        }
    }
 }
int sum(int arr[20][20],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        int s=0;
        for(j=0;j<n;j++)
        {
           s=s+arr[i][j];
        }
        printf("\nSum of all elements in row %d is %d\n",i+1,s);
    }
}

 int main()
 {
     int arr[20][20],m,n,i,j;
     printf("Enter the number of rows and columns\n");
     scanf("%d%d",&m,&n);
     print(arr,m,n);
     sum(arr,m,n);
     return 0;
 }