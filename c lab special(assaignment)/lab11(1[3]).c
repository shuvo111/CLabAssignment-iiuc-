#include <stdio.h>
#include <string.h>

int main()
{
    char s1[200], s2[100];
    int i, j, Len1, Len2;
    printf("Enter an string : ");
    gets(s1);
    printf("Enter another string : ");
    fflush(stdin);
    gets(s2);
    Len1 = strlen(s1);
    Len2 = strlen(s2);
    for (i = Len1, j = 0; j < Len2; i++, j++) {
        s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("After Concatenation\n");
    printf("String 1 : %s\nString 2 : %s\n", s1, s2);
    return 0;
}
