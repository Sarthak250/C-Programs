#include <stdio.h>

int print(int a[][3])
{
    int i,j,m=3,n=3;
    printf("Enter the elements of the array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the element arr%d%d  ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The entered array is \n");
    printf("Enter the elements of the array is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        if(j == m-1)
        printf("\n");
    }
  return 0;
}
int identity(int a[][3])
{
   int flag = 0;
   int i,j;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           if(i == j && a[i][j] != 1)
           {
               flag =-1;
               break;
           }
           else if(i != j && a[i][j] != 0)
           {
               flag = -1;
               break;
           }
       }
   }
   return flag;
}
int main()
{
    int arr[3][3];
    print(arr);
    identity(arr);

    if(identity(arr) == 0)
    printf("\nThe Matrix is an identity matrix\n");
    else 
    printf("The Matrix is not an identity matrix\n");
  return 0;
}