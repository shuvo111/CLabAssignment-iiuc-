#include<stdio.h>

int main(){
int n,i,j=0;
printf("Enter The Number : \n");
scanf("%d",&n);

for (i=1;i<=n;i++){
    if(n%i==0){
        j++;
    }
}
if(j==2){
    printf("%d Is a Prime Number \n",n);
}
else{
    printf("%d Is Not a Prime Number \n",n);
}

}
