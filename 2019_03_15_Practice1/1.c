/*
	실습 2주차 1.c
	2019-03-15
	2018112314
	홍종현
*/


#include <stdio.h>

int main()
{
	double num1, num2, num3, sum, ave;

	
	num1 = 0;
	num2 = 0;
	num3 = 0;
	
	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &num1);


	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &num2);


	printf("실수를 입력하시오 : ");
	scanf_s("%lf", &num3);

	sum = num1 + num2 + num3;
	ave = sum / 3;


	printf("합 : %.2lf \n", sum);
	printf("평균 : %.2lf \n", ave);

	return 0;

}