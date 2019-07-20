#include <stdio.h>
#include <string.h>

int main()
{
    int d, b, b_copy, x, i;
    printf("Enter a binary number : ");
    scanf("%d", &b);
    b_copy = b;
    i = 0;
    d = 0;
    while (b_copy != 0) {
        x = b_copy % 10;
        d += (x * pow (2, i));
        b_copy /= 10;
        i++;
    }
    printf("Binary : %d\nDecimal Equivalent : %d\n", b, d);
    return 0;
}
