#include <stdio.h>

int main(){
int num;
printf("Enter the positive number : \n");
scanf("%d",&num);

switch(num%2)
{
case 0:
    printf("Number is Even : %d",num);
    break;
case 1:
    printf("Number is Odd : %d",num);
    break;
}


}

