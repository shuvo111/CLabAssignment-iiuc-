#include<stdio.h>
#include<string.h>

int main(){

char a[100],b[100];

printf("Enter the number for palindromes: \n");
gets(a);
strcpy(b, a);
strrev(b);

if(strcmp(a, b) == 0){
    printf("%s is palindrome \n",a);
}
else{
    printf("%s is not palindrome \n");
}

return 0;
}

