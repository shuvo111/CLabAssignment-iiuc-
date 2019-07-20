#include <stdio.h>

int main(){
int c, n , fact =1;

printf("Enter the number for finding factorial : \n");
scanf("%d",&n);
for (c=1;c<=n;c++){
    fact = fact*c;


}
printf("Factorial of %d is : %d",n,fact);
return 0;
}
