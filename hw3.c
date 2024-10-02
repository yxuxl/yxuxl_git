#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, a, b;
    int line = 5;
    for (i = 1; i <= line; i++)
    {
        for (a = i; a < line; a++)
            printf(" ");
        for (b = 1; b <= (2 * i - 1); b++)
            printf("*");
        
        printf("\n");
    }
    return 0;
}
