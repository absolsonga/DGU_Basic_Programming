/*
	�ǽ� 10���� 2.c
	2019-05-10
	2018112314
	ȫ����
*/

#include <stdio.h>
int fact(int n); // ���丮���� ���ϴ� ����Լ� ����

int main()
{
	
	int n = 0, r = 0; // �Է°�
	int C = 0; // �����


	printf("���� n�� �Է��� �ּ��� : ");
	scanf("%d", &n);


	printf("���� r�� �Է��� �ּ��� : ");
	scanf("%d", &r);


	C = fact(n) / (fact(n - r) * fact(r)); // ������ ���� ����ϴ� ����

	
	printf("C(%d,%d) = %d �Դϴ�.\n ",n,r,C);

	return 0;
}



int fact(int n) // ���丮���� �����ִ� �Լ�.
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}