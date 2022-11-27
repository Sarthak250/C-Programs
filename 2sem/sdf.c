#include<stdio.h>
#include<stdlib.h>
void func1(int *a,int m,int n)
{
	int i;
printf("The position of the element are : ");
	for(i=0;i<n;i++)
	{
		if(m==*(a+i))
		{
			printf("%d",i+1);
		}
		else
		{
			printf(“Element  not found\n”);
			break;
		}

	}
}
void func2(int *a,int m,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(m==*(a+i))
		{
			*(a+i)=m*m*m;
		}
	}
}
void main()
{
	int i,n,*p,t;
	printf("\t\t\t******INPUT******\n");
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("\n");
	p=(int*)calloc(n,sizeof(int));
	printf("Enter Elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n");
	printf("Enter element to be searched: \n");
	scanf("%d",&t);
            printf("\t\t\t******OUTPUT******\n");
	func1(p,t,n);
	func2(p,t,n);
	printf("The elements of the final array are:  ");
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
}
