#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,diagonal,a;
    printf("Enter The Matrics Element: \n");
    for(int i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Sum of First diagonal: \n");
    diagonal=0;
    for(int i=0; i<3; i++)
    {
        for(j=i; j<3; j+=3)
        {
            diagonal = diagonal + arr[i][j];
        }
    }
    printf("\t %d\n",diagonal);

    printf("Sum of second diagonal: \n");
    diagonal=0;
    a=2;
    for(int i=0; i<3; i++)
    {
        for(j=a; j>=0; j-=3)
        {
            diagonal = diagonal + arr[i][j];
        }
        a--;
    }
    printf("\t%d\n",diagonal);
    return 0;
}
