/*
	�ǽ� 5���� 2.c
	2019-04-05
	2018112314
	ȫ����
*/

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>


int main()
{

	double radius = 0;

	printf("�������� �Է����ּ��� : ");
	scanf("%lf", &radius);

	printf("���� ����(����) : %.2lf \n", M_PI * radius * radius);
	printf("���� �ѷ� : %.2lf \n", M_PI * 2 * radius);


	return 0;
}