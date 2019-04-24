/*
	실습 7주차 2.c
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

	while ( 1 ) // 조건을 만족하기 전까지 무한반복
	{

		printf("정수를 입력하시오 : ");
		scanf("%d", &max);

		printf("(0~10) 사이의 배수를 입력하시오 : ");
		scanf("%d", &multiple);

		if (multiple <= 10 && multiple > 0) // 주어진 조건에 맞게 입력하지 않을 시 처음으로 돌아감. 
		{
			while (num < max) // while문을 이용해 합을 누적.
			{
				num++;
				if (num % multiple == 0) // 주어진 범위 내의 배수를 구하는 조건문.
				{
					sum += num;
				}
			}
			break; // 조건을 만족하는 sum을 구하고 반복문을 탈출.
		}

	}



	printf("sum : %d", sum);

	return 0;
}

