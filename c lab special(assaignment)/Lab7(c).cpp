#include<stdio.h>
int main()
{
    int n,i,j,a=1;
    scanf("%d",&n);
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=j; i++)
        {
            printf("%d",a);
        }
        a++;
        printf("\n");
    }
    printf("\n");
    return 0;
}
