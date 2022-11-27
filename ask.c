#include <stdio.h>

int read(int arr[20][20],int a,int b)
{
    int i,j;
    printf("Enter the elements of the array\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("Enter the elements a[%d][%d]  ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The entered array is\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d  ",arr[i][j]);
            if(j == a-1)
            printf("\n");
        }
    }
}

 int 
 int main()
 {
     int m,n,i,j,a[20][20];
     printf("Enter the number of rows and columns\n");
     scanf("%d%d",&m,&n);
     read(a,m,n);
     

  return 0;
 }