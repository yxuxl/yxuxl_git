#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	printf("Input two integers: ");
	scanf("%d %d", &num1, &num2);
	num3 = num1 & num2;
	num4 = num1 | num2;
	num5 = num1 ^ num2;
	printf("%d & %d = %d\n", num1, num2, num3);
	printf("%d | %d = %d\n", num1, num2, num4);
	printf("%d ^ %d = %d", num1, num2, num5);
}
