#include<stdio.h>
#include <stdlib.h>
int main()
{
    int  number,i,randomNumber;
    FILE *f;
    f = fopen("d:\\RakibVhai.txt", "a");

    for(i=1; i<=100; i++)
    {
        randomNumber = rand() % 100 + 1;
        fprintf(f, "%d\n",randomNumber );
    }
    fclose(f);
    printf("Open Txt File please\n");
    return 0;
}
