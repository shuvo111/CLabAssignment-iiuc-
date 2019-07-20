#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int age;
    char last_degree[20];
    char occupation[20];
    double salary;
} family;

int main()
{
    int n, i;
    family *f;
    printf("Number of family members : ");
    scanf("%d", &n);
    f = (family *) malloc(n * sizeof(family));
    for (i = 0; i < n; i++) {
        printf("Enter info for member no. %d\n", i + 1);
        printf("Name : ");
        fflush(stdin);
        gets(f[i].name);
        printf("Age : ");
        scanf("%d", &f[i].age);
        printf("Last Degree : ");
        fflush(stdin);
        gets(f[i].last_degree);
        printf("Occupation : ");
        fflush(stdin);
        gets(f[i].occupation);
        printf("Salary : ");
        scanf("%lf", &f[i].salary);
    }

    printf("\n\n");
    for (i = 0; i < n; i++) {
        printf("Info of member no. %d\n", i + 1);
        printf("Name : %s\n", f[i].name);
        printf("Age : %d\n", f[i].age);
        printf("Last Degree : %s\n", f[i].last_degree);
        printf("Occupation : %s\n", f[i].occupation);
        printf("Salary : %.2lf\n\n", f[i].salary);
    }
    return 0;
}
