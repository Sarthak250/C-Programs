#include<stdio.h>

void search(int *,int,int);

void replace(int *,int,int);
int main()
{
    int *p,a,n;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);

    p = (int *)malloc(n*sizeof(int));

    printf("Enter the elements in the array:\n");

    for(int i=0;i<n;i++)
    scanf("%d",p+i);

    printf("Enter the element to be searched:\n");
    scanf("%d",&a);
    search(p,n,a);
    replace(p,n,a);

    return 0;
}

void search(int *p,int n,int a)
{
    
    for(int i=0;i<n;i++)
    {
        if(a == *(p+i))
        {
            printf("Element found at position: %d\n",i+1);
            return;
        }
        
    }
    printf("Invalid Search\n");
    return;
        
}

void replace(int *p,int n,int a)
{
    for(int i=0;i<n;i++)
    {
        if(a == *(p+i))
        *(p+i) = a*a*a;
    }
    printf("The updated array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",*(p+i));
    }
    return;
}