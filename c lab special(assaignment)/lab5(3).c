#include<stdio.h>

int main(){
int i,n,first=0,second=1, next;
printf("Enter the number for fibonacci : \n");

scanf("%d",&n);

printf("\nFibonacci Series of %d : ",n);

for(i=1;i<=n;i++){
    printf("\n %d",first);
    next = first+second;
    first = second;
    second = next;
}
return 0;

}
