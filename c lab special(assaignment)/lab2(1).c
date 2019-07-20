#include<stdio.h>
#include<math.h>

double hypotenuse(double x, double y){
double z = sqrt(x*x + y*y);
return z;
}
int main(){
double side1,side2;

printf("Enter two sides : \n");
scanf("%lf %lf",&side1,&side2);

printf("Answer is : %lf",hypotenuse(side1,side2));
return 0;
}
