#include <stdio.h>

struct employee
{
    char name[50];
    int salary,hr;
};

int main()
{
    struct employee a[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter the name of the employee:\n");
        char ch = getchar();
        scanf("%[^\n]s",a[i].name);
        printf("Enter the salary of the employee:\n");
        scanf("%d",&a[i].salary);
        printf("Enter the working hours per day of the employee:\n");
        scanf("%d",&a[i].hr);
    }
    for(int i=0;i<10;i++)
    {
        if(a[i].hr == 8)
        a[i].salary = a[i].salary + 2500;
        else if(a[i].hr == 10)
        a[i].salary = a[i].salary + 5000;
        else if(a[i].hr >= 12)
        a[i].salary = a[i].salary + 7500;
        
    }
    for(int i=0;i<10;i++)
    {
        printf("The new salary of %s is:\n%d\n",a[i].name,a[i].salary);
    }
    return 0;
}