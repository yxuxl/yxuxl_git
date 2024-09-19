#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float km;
	printf("Please enter kilometers: ");
	scanf("%f", &km);
	float mile = km / 1.609;
	printf("%0.1f km is equal to %0.1f miles.", km, mile);
	return 0;
}