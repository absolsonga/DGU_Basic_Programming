/*
	�ǽ� 3���� 2.c
	2019-03-22
	2018112314
	ȫ����
*/


#include <stdio.h>

float Max(float a, float b, float c)
{
	float max = 0;
	max = a > b ? a : b;
	max = c > max ? c : max; // ���� �����ڸ� ����Ͽ� �� �Ǽ��� �� �� �ִ� ã��.

	return max;

}


int main()
{
	float a, b, c;

	printf("ù��° ���� \n");
	scanf("%f", &a);

	printf("�ι�° ���� \n");
	scanf("%f", &b);

	printf("����° ���� \n");
	scanf("%f", &c);

	printf("%.2f", Max(a, b, c)); // �ִ��� �Ҽ��� ��°�ڸ����� ���.


}