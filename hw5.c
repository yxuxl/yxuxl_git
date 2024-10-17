#include <stdio.h>
void dec2bin(int num)
{
    if (num == 1)
        printf("1");
    else
    {
        int n = num % 2;
        dec2bin(num / 2);
        printf("%d", n);
    }
}
int main(void)
{
    int num;
    printf("Please enter a number: ");
    scanf_s("%d", &num);
    dec2bin(num);
    return 0;
}
