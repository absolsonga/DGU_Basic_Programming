/*
	실습 7주차 1.c
	2019-04-19
	2018112314
	홍종현
*/

#include <stdio.h>

int main()
{
	int num = 0, max = 0; // 초기부터 더할값 num, 최댓값 max
	int multiple = 0;
	int sum = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &max);
	
	printf("(0~10) 사이의 배수를 입력하시오 : ");
	scanf("%d", &multiple);


add: // goto 문 사용.
	if (num % multiple == 0)
	{
		sum += num;
	}

	if (num < max)
	{
		num++;
		goto add;
	}

	

	printf("sum : %d", sum);

	return 0;
}

