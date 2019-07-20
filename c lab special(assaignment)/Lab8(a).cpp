#include<stdio.h>
int main()
{
    int n,i,small;
    printf("Enter How Many Number in Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array Element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    small = arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i+1]<=small)
        {
            small = arr[i+1];
        }
    }
    printf("Smallest Number In Array: %d\n",small);
    return 0;
}
