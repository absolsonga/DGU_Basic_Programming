/*
	실습 4주차 2.c
	2019-03-29
	2018112314
	홍종현
*/

#include <stdio.h>
#include <stdlib.h>

int getMax(int *arr,int num) // 최댓값을 반환하는 함수
{
	int Max = 0;

	for (int i = 0; i < num; i++)
	{
		if (arr[i] > Max)
		{
			Max = arr[i];
		}
	}

	return Max;
	
}

int getMin(int *arr, int num) // 최솟값을 반환하는 함수
{

	int Min = arr[0];

	for (int i = 0; i < num; i++)
	{
		if (arr[i] < Min)
		{
			Min = arr[i];
		}
	}

	return Min;
	
}

void show_numbers(int *arr,int num) // 저장된 난수값을 보여주는 함수
{
	for (int i = 0; i < num; i++)
	{
		printf(" %d", arr[i]);
	}



	printf("\n");
}

int main()
{
	int num = 0; // 사용자에게 입력받을 수
	int *arr; // 난수를 저장할 배열

	srand(time(NULL));

	printf("입력할 정수의 갯수 : ");
	scanf("%d", &num);


	arr = (int*)malloc(sizeof(int) * num); // 배열에 num 만큼 메모리 동적 할당



	printf("저장된 난수들 : ");
	for (int i = 0; i < num; i++)
	{
		int n = rand() % 100 + 1; // 난수 생성 및 배열에 저장
		arr[i] = n;
	}

	show_numbers(arr, num);

	printf("최솟값 : %d \n", getMin(arr, num));
	printf("최댓값 : %d \n", getMax(arr, num));



	return 0;

}
