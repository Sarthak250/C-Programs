#include <stdio.h>

int input(int a[20][20],int m,int n)
{
    int i,j;
    printf("enter the elements in the array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("Enter the elements arr%d%d  ",i,j);
           scanf("%d",&a[i][j]);
        }
    }
    printf("The inputed array is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d  ",a[i][j]);
        
           if(j == m-1)
           printf("\n");
        }
    }
  return 0;
}
 int find(int a[20][20],int r,int c,int num)
 {
     int i,j;
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             if(num == a[i][j])
             {
                 printf("Found the number %d at arr%d%d\n",num,i,j);
                 break;
             }
         }
     }
     
     printf("Number not found\n");
   return 0;
 }
 int main()
{
    int n,r,c,arr[20][20];
    printf("Enter the number of rows and columns of the array\n");
    scanf("%d%d",&r,&c);
    printf("Enter the number to be searched\n");
    scanf("%d",&n);
    input(arr,r,c);
    find(arr,r,c,n);

}