#include <stdio.h>
#include<math.h>

int main(){
    int n,sum;
    sum =0;
    printf("Enter the number : \n");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        sum = sum+ (2*i-1)*(2*i-1);

   }

    printf("Sum of the series is : %d \n",sum);
    return 0;

}
