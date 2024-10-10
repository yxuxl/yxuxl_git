#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i;
	int is_prime = 1;

	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num <= 1)
		is_prime = 0;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			is_prime = 0;
		    break;

	}
	if (is_prime == 1)
		printf("It is a prime number.\n");
	else
		printf("It is not a prime number.\n");

	return 0;

}