#include<stdio.h>
int main()
{
    int n,i,a,temp;
    printf("Enter How Many Number in Array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Array Element: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Your Required Number: ");
    scanf("%d",&a);
    for(i=0; i<n; i++)
    {
        if(arr[i]==a)
            temp = i;
    }
    printf("Searching Position: %d\n",temp+1);
    return 0;
}
