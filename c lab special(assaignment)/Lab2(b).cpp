#include<stdio.h>
int main()
{
    int x,y,a,b,c,d;
    scanf("%d",&x);
    a = ((x-1/(double)x));

    b = (((a*a))/(double)2);

    c = ((a*a*a)/(double)3);

    d = ((a*a*a*a)/(double)4);

    y = a+b+(c*d);

    printf("%d\n",y);
    return 0;
}
