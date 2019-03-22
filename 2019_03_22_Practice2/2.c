/*
	실습 3주차 2.c
	2019-03-22
	2018112314
	홍종현
*/


#include <stdio.h>

float Max(float a, float b, float c)
{
	float max = 0;
	max = a > b ? a : b;
	max = c > max ? c : max; // 삼항 연산자를 사용하여 세 실수의 값 중 최댓값 찾기.

	return max;

}


int main()
{
	float a, b, c;

	printf("첫번째 숫자 \n");
	scanf("%f", &a);

	printf("두번째 숫자 \n");
	scanf("%f", &b);

	printf("세번째 숫자 \n");
	scanf("%f", &c);

	printf("%.2f", Max(a, b, c)); // 최댓값을 소수점 둘째자리까지 출력.


}