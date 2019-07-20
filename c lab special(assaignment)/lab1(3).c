#include<stdio.h>

int main(){

int a,b;
float q,r;
printf("Enter two numbers :\n");
scanf("%d%d",&a,&b);

q = a/b;
printf("Quotient of two number is : %f",q);

r = a%b;
printf("Reminder of two number is %f",r);

}
