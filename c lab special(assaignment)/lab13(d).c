#include <stdio.h>
#include <math.h>

int main()
{
    int number[100], i, j, temp;
    FILE *fp;

    fp = fopen("RAND.DAT", "w");
    fprintf(fp, "%d\n", rand());
    fclose(fp);

    printf("Reading numbers from files\n\n");
    fp = fopen("RAND.DAT", "r");
    for (i = 0; i < 100; i++) {
        fscanf(fp, "%d", &number[i]);
        printf("%d\n", number[i]);
    }

    for (i = 0; i < 99; i++) {
        for (j = i + 1; j < 100; j++) {
            if (number[i] > number[j]) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }

    printf("Printing numbers in ascending order\n\n");
    for (i = 0; i < 100; i++) {
        printf("%d\n", number[i]);
    }
    return 0;
}
