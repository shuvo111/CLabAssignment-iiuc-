#include <stdio.h>

int main(){

char ch;

printf("Enter here : \n");
scanf("%c",&ch);

if((ch >= 'A' && ch <= 'Z')||(ch >= 'a' && ch <= 'z')){
printf("Input is an alphabet : %c",ch);
}
else if(ch >= '0' && ch <= '9'){
printf("Input is a digit : %c",ch);
}
else{
printf("Input is an special character : %c",ch);
}

return 0;
}
