 #include <stdio.h>
 #include<string.h>
 int main()
 {
    char a[20],b[20],c[20];
    int i,h;
    printf("Enter your First name\n");
    gets(a);
    printf("Enter your Second name\n");
    gets(b);
    printf("Enter your Third name\n");
    gets(c);
    printf("%c.%c.",a[0],b[0]);
    puts(c);
    
    return 0;
 }