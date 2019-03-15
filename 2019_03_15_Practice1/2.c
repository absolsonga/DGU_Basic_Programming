/*
	실습 2주차 2.c
	2019-03-15
	2018112314
	홍종현
*/


#include <stdio.h>

int main()
{
	double mile, meter;

	printf("마일을 입력 하시오 : ");
	scanf_s("%lf", &mile);

	meter = 1609 * mile;

	printf("%.1lf 마일은 %.1lf 미터 입니다. \n", mile, meter);

	return 0;

}