#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	/*
	char str1[50];
	char str2[50];
	fgets(str1, sizeof(str1), stdin);
	*/
	char str1[50];
	char str2[50];

	printf("�� ����� �̸� �Է�: ")
	scanf("%s \n%s", &str1,str2);
	printf("%s %s", str1, str2);
	if (str1 == str2)
		printf("�� ����� �̸��� ����");
	else
		printf("�� ����� �̸��� �ٸ���");

	



}