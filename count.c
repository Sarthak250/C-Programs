#include <stdio.h>

 int main()
{
    int n,k;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    printf("\nEnter the number to be checked ");
    scanf("%d",&k);
    int i,a[n],c1=0,c2=0,c3=0;
    printf("\nEnter the elements:  ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i] > k){
            c1++;
        }
        else if(a[i] == k){
            c2++;
        }
        else
        c3++;
    }
    printf("\nThe number of elements greater than %d are %d",k,c1);
    printf("\nThe number of elements equal to %d are %d",k,c2);
    printf("\nThe number of elements less than %d are %d",k,c3);
    return 0;
}