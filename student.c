#include <stdio.h>
struct stu
{
    char name[50];
    int rn,m1,m2,m3,total;

};

int main()
{
    int n,t,avg;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    struct stu a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the student\n");
        char ch = getchar();
        scanf("%[^\n]s",a[i].name);
        printf("Enter the roll no of the student\n");
        scanf("%d",&a[i].rn);
        printf("Enter the marks in the 3 subjects\n");
        scanf("%d %d %d",&a[i].m1,&a[i].m2,&a[i].m3);

    }
    for(int i=0;i<n;i++)
    {
        a[i].total=0;
        a[i].total=a[i].m1+a[i].m2+a[i].m3;
        avg = a[i].total/3;
        //printf("The total number of the student %s are %d\n",a[i].name,a[i].total);
        //printf("The average of the marks of the student %s are %d \n",a[i].name,avg);
    }
    
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i].total>a[j].total)
            {
                t=a[i].total;
                a[i].total = a[j].total;
                a[j].total = t;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("The details of the students are:-\n");
        printf("The name of the student is %s\n",a[k].name);
        printf("roll no of %s is \n",a[k].name);
        printf("%d\n",a[k].rn);
        printf("Total marks of %s are %d\n",a[k].name,a[k].total);
    }
    return 0;
}