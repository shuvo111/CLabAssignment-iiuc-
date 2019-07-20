#include<stdio.h>
int main()
{
    int arr[3][3];
    int i,j,row,colomn;
    printf("Enter The Matrics Element: \n");
    for(int i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Sum of Rows: \n");
    for(int i=0; i<3; i++)
    {
        row=0;
        for(j=0; j<3; j++)
        {
            row = row + arr[i][j];
        }
        printf("%d ",row);
        printf("\n");
    }
    printf("Sum of Colomns: \n");
    for(int j=0; j<3; j++)
    {
        colomn=0;
        for(i=0; i<3; i++)
        {
            colomn = colomn+arr[i][j];
        }
        printf("%d ",colomn);
        printf("\n");
    }
    return 0;
}

