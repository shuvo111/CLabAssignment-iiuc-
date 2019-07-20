
#include<stdio.h>

int main(){

int num1,num2,reminder,denominator,numarator,gcd,lcm;

printf("Enter the Two Numbers : \n");
scanf("%d%d",&num1,&num2);

if(num1>num2){
    numarator= num1;
    denominator = num2;
}
else{
    numarator= num2;
    denominator = num1;
}

reminder = numarator%denominator;
while(reminder!=0)
{
    numarator = denominator;
    denominator = reminder;
    reminder = numarator%denominator;
}

gcd = denominator;
lcm = num1*num2/gcd;

printf("GCD of %d and %d is : %d \n",num1,num2,gcd);
printf("LCM of %d and %d is : %d \n",num1,num2,lcm);
return 0;
}
