#include<stdio.h>
#include<string.h>

int main(){
char a[100];
char b[100];
char conStr[100];
printf("Enter two strings : \n");
gets(a);
gets(b);


int len = strlen(a)+strlen(b);

printf("Sum of String Lengths is : %d \n", len);

if(strlen(a)>strlen(b)){
    printf("Greater string is : %s", a);
}
else{
    printf("Greater string is : %s", b);
}

strcat(a,b);
printf("\nConcatenation of two strings : %s", a);
strcpy(a,b);
printf("\nCopy from second string to first strings : %s", a);
return 0;

}
