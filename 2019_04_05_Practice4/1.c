/*
	�ǽ� 5���� 1.c
	2019-04-05
	2018112314
	ȫ����
*/

#include <stdio.h>

void Show_BuubleSort(int *arr,int size) // ���� ���� ��, ���ĵ� �迭�� ����ϴ� �Լ�
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
	int size = sizeof(arr) / sizeof(int); // arr�� ũ�� ����.

	printf("�������� ���� : ");

	Show_BuubleSort(arr,size);

	return 0;

}