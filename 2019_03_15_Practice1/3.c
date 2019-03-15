/*
	½Ç½À 2ÁÖÂ÷ 3.c
	2019-03-15
	2018112314
	È«Á¾Çö
*/


#include <stdio.h>

int main()
{
	double C = 0, F = 0;


	printf("È­¾¾°ª : ");
	scanf_s("%lf", &F);

	C = (5.0 / 9.0) * (F - 32);


	printf("¼·¾¾°ª : %.2lf\n", C);

	return 0;

}