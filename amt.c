#include <stdio.h>
int main()
{
    int amt,count=0;
    printf("Enter the amount to be paid");
    scanf("%d",amt);
    if(amt >= 500){
        count+= amt / 500;
        amt = amt % 500;
    }
     if(amt >= 200){
        count+= amt / 200;
        amt = amt % 200;
    }
     if(amt >= 100){
        count+= amt / 100;
        amt = amt % 100;
    }
     if(amt >= 50){
        count+= amt / 50;
        amt = amt % 50;
    }
     if(amt >= 20){
        count+= amt / 20;
        amt = amt % 20;
    }
     if(amt >= 10){
        count+= amt / 10;
        amt = amt % 10;
    }
     if(amt >= 2){
        count+= amt / 2;
        amt = amt % 2;
    }
     if(amt <2){
         count +=amt;
     }
     printf("The minimum number of notes required are %d",count);
  return 0;
}
