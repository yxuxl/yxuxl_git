#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���Ƕ�̵�
int main()
{
	int a, b, c = 0;
	int line = 5;
	for (a = 1;a <= line;a++)
	{
		for (b = a;b > 1 && b < 6;b--)
			printf(" ");
		for (c = 11-(2*a); c > 0; c--)
			printf("*");
		printf("\n");
	}
}

/* �ణ ���Ǹ����� ����
int main()
{
	int a, b, c = 0;
	int line = 5;
	for (a = 1;a <= line;a++)
	{
		for (b = a;b>1&&b<6;b--)
			printf(" ");
		for (c = 6-a; c > 0; c--)
			printf("*");
		printf("\n");
	}
}
*/

/*���� �Ƕ�̵�
int main()
{
	int a, b, c = 0;
	int line = 5;
	for (a = 1; a <= line; a++)
	{
		for (b = a; b < line; b++)
			printf(" ");
		for (c = 1; c < 2*a; c++)
			printf("*");
		printf("\n");
	}
	
}*/
/* �̰� �߰��� �۴�� �� ��
int a, b, c;
int line = 5;
for (a = 1; a <= line; a++)
{
    for (b = a; b < line; b++)
        printf(" ");
    for (c = 1; c <= ((2 * a) - 1); c++)
    {
        if (c == 1 || c == ((a * 2) - 1))
            printf("*");
        else printf("-");
    }
    printf("\n");

}
return 0;
*/