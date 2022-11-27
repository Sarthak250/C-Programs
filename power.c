#include <stdio.h>
void power(int,int);
void power(int x,int y){
    int i,multi=1;
    for(i=1;i<=y;i++){
        multi = multi*x;
    }
    printf("The product of %d, %d times is %d",x,y,multi);
}
int main(){
    int a,b;
    printf("Enter the base and the power\n");
    scanf("%d%d",&a,&b);
    power(a,b);
    return 0; 
}