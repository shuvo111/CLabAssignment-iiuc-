#include<stdio.h>
int main()
{
    int n,i,j,a;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        a=1;
        for(i=1; i<=j; i++)
        {
            printf("%d",a++);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
