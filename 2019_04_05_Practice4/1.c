/*
	실습 5주차 1.c
	2019-04-05
	2018112314
	홍종현
*/

#include <stdio.h>

void Show_BuubleSort(int *arr,int size) // 버블 정렬 후, 정렬된 배열을 출력하는 함수
{
	int i,j, temp = 0;

	for (i = 0; i < size-1; i++)
	{
		for (j = i; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


	for (i = 0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}

	

}


int main()
{
	int arr[] = { 4,5,6,7,8,11,9 };
	int size = sizeof(arr) / sizeof(int); // arr의 크기 구함.

	printf("오름차순 정렬 : ");

	Show_BuubleSort(arr,size);

	return 0;

}