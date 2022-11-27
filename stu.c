#include <stdio.h>
struct date
{
    int day,month,year;
};
struct student
{
    int rn;
    struct date dob,add;
};
int main()
{
    int n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    struct student a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the roll number of the student\n");
        scanf("%d",&a[i].rn);
        printf("Enter the date of birth\n");
        scanf("%d",&a[i].dob.day);
        printf("Enter the month of birth\n");
        scanf("%d",&a[i].dob.month);
        printf("Enter the year of birth\n");
        scanf("%d",&a[i].dob.year);
        printf("Enter the day of admission\n");
        scanf("%d",&a[i].add.day);
         printf("Enter the month of admission\n");
        scanf("%d",&a[i].add.month);
        printf("Enter the year of admission\n");
        scanf("%d",&a[i].add.year);
    }
    for(int i=0;i<n;i++)
{
    printf("the age of the student till the date of admission is %d years",a[i].add.year - a[i].dob.year);
}

    return 0;
}