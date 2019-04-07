/*
	실습 5주차 3.c
	2019-04-05
	2018112314
	홍종현
*/
#define _USE_MATH_DEFINES

#include <math.h>
#include <stdio.h>

int main()
{
	float x1 = 0, x2 = 0, x3 = 0;
	float y1 = 0, y2 = 0, y3 = 0;

	float triangle = 0;

	printf("첫번째 좌표를 입력하시오 : \n");
	printf("x1 : ");
	scanf("%f", &x1);
	printf("y1 : ");
	scanf("%f", &y1);

	printf("두번째 좌표를 입력하시오 : \n");
	printf("x2 : ");
	scanf("%f", &x2);
	printf("y2 : ");
	scanf("%f", &y2);

	printf("세번째 좌표를 입력하시오 : \n");
	printf("x3 : ");
	scanf("%f", &x3);
	printf("y3 : ");
	scanf("%f", &y3);


	triangle = 0.5 * abs( ((x1 * y2) + (x2 * y3) + (x3 * y1)) - ((x2 * y1) + (x3 * y2) + (x1 * y3))); // 사선 공식 ( 구두끈 공식 ) 사용하여 세 점의 좌표를 이용한 넓이 구하기.

	printf("삼각형의 넓이 : %.2f \n", triangle);

	return 0;

}