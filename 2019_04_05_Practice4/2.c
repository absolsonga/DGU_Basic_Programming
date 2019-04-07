/*
	실습 5주차 2.c
	2019-04-05
	2018112314
	홍종현
*/

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>


int main()
{

	double radius = 0;

	printf("반지름을 입력해주세요 : ");
	scanf("%lf", &radius);

	printf("원의 면적(넓이) : %.2lf \n", M_PI * radius * radius);
	printf("원의 둘레 : %.2lf \n", M_PI * 2 * radius);


	return 0;
}