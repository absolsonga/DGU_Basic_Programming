/*
	�ǽ� 9���� 1.c
	2019-05-03
	2018112314
	ȫ����
*/

#include <stdio.h>

int factorial(int n)
{
	if (n == 1)
		return 1;

	if (n > 0)
	{
		return n * factorial(n - 1);
	}

}


int main()
{
	int n; // ����ڿ��� �Է¹��� ����.

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &n);

	printf("%d! �� %d �Դϴ�.\n", n, factorial(n));

	return 0;
}
