#include<stdio.h>
int main()
{
    int arr[2][2];
    int arr1[2][2];
    int add[5][5];
    int i,j;
    printf("Enter The First Matrics Element: \n");
    for(int i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter The Second Matrics Element: \n");
    for(int i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("After Addition Matrics Element: \n");
    for(int i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            add[i][j] =   arr[i][j]+arr1[i][j];
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}
