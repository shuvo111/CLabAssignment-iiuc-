#include <stdio.h>
#define PI 3.14
int main(){

float v,a,r;

printf("Please Enter the radious : \n");
scanf("%f",&r);
v = 4.0/3 *PI*r*r*r;
a = 4 *PI*r*r;
printf("Volume of surface is : %f",v);
printf("\n Area of surface id : %f",a);

return 0;

}
