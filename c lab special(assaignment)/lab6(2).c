#include<stdio.h>
#include<math.h>
int main(){

int dec,rem,temp;
temp = 1;
long bin=0;
printf("Enter the Decimal Number : \n");
scanf("%d",&dec);

while(dec !=0){
rem = dec%2;
dec = dec/2;
bin = bin+rem*temp;
temp = temp*10;
}
printf("Binary number is %ld ",bin);
printf("Binary number is %d ",temp);
return 0;
}
