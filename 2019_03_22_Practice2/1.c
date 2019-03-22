/*
	실습 3주차 1.c
	2019-03-22
	2018112314
	홍종현
*/


#include <stdio.h>

int isLeapYear(int year) // 연도가 윤년인지 반환하는 함수
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) // year
	{
		return 1;
	}
	else
	{
		return 0;
	}

}


int main()
{
	int year = 0;

	printf("연도를 입력하시오: ");
	scanf_s("%d", &year);

	if (isLeapYear(year))
	{
		printf("%d 년은 윤년입니다.\n", year);
	}
	else 
	{
		printf("%d 년은 평년입니다.\n", year);
	}




}