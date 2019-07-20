#include<stdio.h>
#include<string.h>
int main()
{
    char a[5];
    char b[5];
    int i,j=0,k;
    gets(a);
    gets(b);
    char c[10];
    for(k=0; k<5; k++)
    {
        c[k]=a[k];
    }
    for(i=5; i<10; i++)
    {
        c[i]=b[j];
        j++;
    }
    for(i=0; i<10; i++)
    {
        printf("%c",c[i]);
    }
    return 0;
}
