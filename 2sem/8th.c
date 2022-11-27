#include <stdio.h>

struct student
{
    char name[50],add[100];
    int age,rn;
};

void stu(struct student [], int );

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the name of the student: ");
        char ch = getchar();
        scanf("%[^\n]s",a[i].name);
        printf("Enter the roll no of the student: ");
        scanf("%d",&a[i].rn);
        printf("Enter the age of the student: ");
        scanf("%d",&a[i].age);
        printf("Enter the address of the student: ");
        char c = getchar();
        scanf("%[^\n]s",a[i].add);
    }
        stu(a,n);
    return 0;
}

void stu(struct student b[],int n)
{
    printf("The name of the students whose age is 14 and even roll number are:\n");
    for(int i=0;i<n;i++)
    {
        if(b[i].age == 14 &&(b[i].rn %2 == 0))
        {
            puts(b[i].name);
        }
    }
}