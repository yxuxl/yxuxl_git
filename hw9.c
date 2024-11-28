#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char arr[5][5];
    int i, j, k = 0;
    int hang, yeol = 0;
    int total = 25;
    int c_count = 20;
    int f_count = 5;

    srand(time(NULL));
    for (i = 0;i < 5;i++)
    {
        for (j = 0;j < 5;j++)
        {
            arr[i][j] = '.';
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    while (k < 5)
    {
        printf("컵을 선택하세요 (행번호 열번호): ");
        scanf("%d %d", &hang, &yeol);

        int radom = rand() % total;
        int hang = radom / 5;
        int yeol = radom % 5;

        if (arr[hang][yeol] != '.')
        {
            continue;
        }
        if (c_count > 0)
        {
            arr[hang][yeol] = 'C';
            c_count--;
        }
        else if (f_count > 0)
        {
            arr[hang][yeol] = 'F';
            f_count--;
        }
        for (i = 0;i < 5;i++)
        {
            for (j = 0;j < 5;j++)
            {
                printf("%c", arr[i][j]);
            }
            printf("\n");
        }
        k++
    }

    return 0;
}