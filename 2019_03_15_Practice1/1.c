/*
	�ǽ� 2���� 1.c
	2019-03-15
	2018112314
	ȫ����
*/


#include <stdio.h>

int main()
{
	double num1, num2, num3, sum, ave;

	
	num1 = 0;
	num2 = 0;
	num3 = 0;
	
	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num1);


	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num2);


	printf("�Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num3);

	sum = num1 + num2 + num3;
	ave = sum / 3;


	printf("�� : %.2lf \n", sum);
	printf("��� : %.2lf \n", ave);

	return 0;

}