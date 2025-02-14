#include<stdio.h>
double square(double num){
    return(num * num);
}
// functtion to find square of s number//
int main(){
int num;
double n;
printf(" function to :find square of a number\n");
printf("enter a number:");
scanf("%d", &num);
n = square(num);
printf("The square is %f\n", n);
return 0;
    }