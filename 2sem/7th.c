
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,m;
    int *p,*q,*r;
    printf("Enter the number of elements in the First array \n");
        scanf(" %d",&n1);

    printf("Enter the number of elements in the Seecond array \n");
            scanf(" %d",&n2);

    p = (int *)malloc(n1*sizeof(int));
    q = (int *)malloc(n2*sizeof(int));
    printf("Enter the elements of array 1\n");
    for(i=0;i<n1;i++)
    {
        scanf(" %d",p+i);
    }

    printf("Enter the elements of array 2\n");

    for(i=0;i<n2;i++)
    {
        scanf(" %d",q+i);
    }

    m = n1>n2?n1:n2;

    r = (int *)malloc(m*sizeof(int));

    for(i=0;i<m;i++)
    {
        if(i<n1 && i<n2)
        *(r+i) = *(p+i) + *(q+i);
        else if(i>=n1)
        *(r+i) = *(q+i); 
        else if(i>=n2)
        *(r+i) = *(p+i);
    }

    printf("The resulted array is:\n");
    for(i=0;i<m;i++)
    printf("%d  ",*(r+i));
   
    free(p);
    free(q);
    free(r);
   return 0;

}