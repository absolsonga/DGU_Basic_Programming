/*
	�ǽ� 2���� 3.c
	2019-03-15
	2018112314
	ȫ����
*/


#include <stdio.h>

int main()
{
	double C = 0, F = 0;


	printf("ȭ���� : ");
	scanf_s("%lf", &F);

	C = (5.0 / 9.0) * (F - 32);


	printf("������ : %.2lf\n", C);

	return 0;

}