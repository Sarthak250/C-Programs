#include <stdio.h>

int main()
{
    int ch;
    printf("Enter the choice\n 1. for Monday\n 2. for Tuesday\n 3. for Wednesday\n 4. for Thursday\n 5. for Friday\n 6. for Saturday\n 7. for Sunday\n");
    scanf("%d",&ch); 

    switch(ch)
    {
        case 1:
        {
            int a;
            printf("Enter the number of vaccianations for Monday\n");
            scanf("%d",&a);
            printf("%d",a);
            break;
        }
        case 2:
        {
             int b;
            printf("Enter the number of vaccianations");
            scanf("%d",&b);
             printf("%d",b);
            break;
        }
        case 3:
        {
              int c;
              printf("Enter the number of vaccianations");
              scanf("%d",&c);
               printf("%d",c);
              break;
        }
        case 4:
        {
              int d;
              printf("Enter the number of vaccianations");
              scanf("%d",&d);
               printf("%d",d);
              break;
        }
        case 5:
        {
              int e;
              printf("Enter the number of vaccianations");
              scanf("%d",&e);
               printf("%d",e);
              break;
        }
        case 6:
        {
              int f;
              printf("Enter the number of vaccianations");
              scanf("%d",&f);
               printf("%d",f);
              break;
        }
        case 7:
        {  
              int g;
              printf("Enter the number of vaccianations");
              scanf("%d",&g);
               printf("%d",g);
              break;
        }
    }
}