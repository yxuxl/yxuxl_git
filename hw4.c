#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num=0;
	int i=0;
	int prime = 1;

	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num <= 1)
		prime = 0;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			prime = 0;
		    break;

	}
	if (prime == 1)
		printf("It is a prime number.\n");
	else
		printf("It is not a prime number.\n");

	return 0;

}