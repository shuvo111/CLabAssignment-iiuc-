#include<stdio.h>
#include<string.h>
int main()
{
 char a[10];
 char b[10];
 int l=0,m,i;
    gets(a);
    for(i=0;i<10;i++){
        if(a[i]==' ')
            break;
            else
                l++;
    }
    for(i=0;i<l;i++){
       b[i]=a[i];
    }
   puts(b);
    return 0;
}
