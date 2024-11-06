#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int integers[5];
	int i = 0;
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &integers[i]);
		if (integers[i] % 2 == 1)
			printf("Odd numbers: %s", integers[i]);
		else
			printf("Even numbers: %s", integers[i]);

	}
	
}