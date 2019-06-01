/*
	실습 12주차 1.c
	2019-05-24
	2018112314
	홍종현
*/
#include <stdio.h>

int max(int tmp[]);

int min(int tmp[]);


// 카프리카 불변수를 구하는 예제

int main()
{
	int number = 0;

	int tmp[4];

	int cnt = 0, temp;


	printf("4자리 정수를 입력하시오 : ");
	scanf_s("%d", &number);



	while (number != 6174) // 6174는 카프리카 불변수임.
	{
		for (int i = 0; i < 4; i++)
		{
			tmp[i] = number % 10;
			number /= 10;
		}

		number = max(tmp) - min(tmp);

		printf("%d - %d = %d \n", max(tmp), min(tmp), number);


		cnt++;

	}

	printf("\n-------------------\n");
	printf("실행 횟수 : %d", cnt);


	return 0;
}


int max(int tmp[])
{
	int temp, num;


	for (int j = 0; j < 4; j++)
	{

		for (int k = 0; k < 3; k++)
		{

			if (tmp[k] > tmp[k + 1])

			{

				temp = tmp[k];
				tmp[k] = tmp[k + 1];
				tmp[k + 1] = temp;

			}
		}
	}
	
	num = tmp[0] + tmp[1] * 10 + tmp[2] * 100 + tmp[3] * 1000;
	
	return num;

}


int min(int tmp[])
{
	int temp, num;


	for (int j = 0; j < 4; j++)
	{

		for (int k = 0; k < 3; k++)
		{

			if (tmp[k] < tmp[k + 1])

			{

				temp = tmp[k];
				tmp[k] = tmp[k + 1];
				tmp[k + 1] = temp;

			}
		}
	}

	num = tmp[0] + tmp[1] * 10 + tmp[2] * 100 + tmp[3] * 1000;

	return num;

}