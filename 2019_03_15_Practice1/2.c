/*
	�ǽ� 2���� 2.c
	2019-03-15
	2018112314
	ȫ����
*/


#include <stdio.h>

int main()
{
	double mile, meter;

	printf("������ �Է� �Ͻÿ� : ");
	scanf_s("%lf", &mile);

	meter = 1609 * mile;

	printf("%.1lf ������ %.1lf ���� �Դϴ�. \n", mile, meter);

	return 0;

}