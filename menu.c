#include<stdio.h>
int main()
{
    int ch;
    printf("Enter the choice\n 1: count no of digits\n 2: reverse the number\n 3: check prime number\n 4: check perfect number\n 5: palindrome number\n 6: armstrong number\n");
    scanf("%d",&ch);
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    switch (ch)
    {
        case 1:{
                int c=0;
                while(n!=0)
                {
                    n = n/10;
                    ++c;
                }
                printf("The number of digits = %d\n",c);
                break;
                }
        case 2:
             {   int p=0;
                while(n!=0)
                {
                    p=p*10 +n%10;
                    n=n/10;
                }    
                printf("The reversed number is %d\n",p);
                break;
             }
        case 3:
              {  int f=0,m=n/2;
              if(n==0 || n== 1)
              f=1;
                for(int i=2;i<m;i++)
                {
                    if(n % i == 0)
                    {
                        printf("Number is not prime\n");
                        f=1;
                        break;
                    }
                }
                if(f == 0)
                printf("The number is prime\n");
                break;
              }
        case 4:
              {  int d=0,v=n/2;
                for(int i=1;i<=v;i++)
                {
                    if(n % i == 0)
                    d = d+i;
                }
                if(n==d)
                printf("the number is a perfect number\n");
                else
                printf("the number is not a perfect number\n");
                break;
              }
        case 5:
              {  int s,r=0,q=n;
                while(n>0)
                {
                    s=n%10;
                    r = (r*10)+s;
                    n=n/10;
                }
                if(q == r)
                printf("Palindrome number\n");
                else 
                printf("Not a palindrome number\n");
                break;
              }
        case 6:
              { int o=0,w,q=n;
                while(n>0)
                {
                    w=n%10;
                    o=o+w*w*w;
                    n=n/10;
                }
                if(o == q)
                printf("Armstrong number\n");
                else 
                printf("Not an armstrong number\n");
                break;
              }
    }
      return 0;
}