/*
	�ǽ� 5���� 3.c
	2019-04-05
	2018112314
	ȫ����
*/
#define _USE_MATH_DEFINES

#include <math.h>
#include <stdio.h>

int main()
{
	float x1 = 0, x2 = 0, x3 = 0;
	float y1 = 0, y2 = 0, y3 = 0;

	float triangle = 0;

	printf("ù��° ��ǥ�� �Է��Ͻÿ� : \n");
	printf("x1 : ");
	scanf("%f", &x1);
	printf("y1 : ");
	scanf("%f", &y1);

	printf("�ι�° ��ǥ�� �Է��Ͻÿ� : \n");
	printf("x2 : ");
	scanf("%f", &x2);
	printf("y2 : ");
	scanf("%f", &y2);

	printf("����° ��ǥ�� �Է��Ͻÿ� : \n");
	printf("x3 : ");
	scanf("%f", &x3);
	printf("y3 : ");
	scanf("%f", &y3);


	triangle = 0.5 * abs( ((x1 * y2) + (x2 * y3) + (x3 * y1)) - ((x2 * y1) + (x3 * y2) + (x1 * y3))); // �缱 ���� ( ���β� ���� ) ����Ͽ� �� ���� ��ǥ�� �̿��� ���� ���ϱ�.

	printf("�ﰢ���� ���� : %.2f \n", triangle);

	return 0;

}