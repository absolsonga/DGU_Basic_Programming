/*
	�ǽ� 4���� 2.c
	2019-03-29
	2018112314
	ȫ����
*/

#include <stdio.h>
#include <stdlib.h>

int getMax(int *arr,int num) // �ִ��� ��ȯ�ϴ� �Լ�
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

int getMin(int *arr, int num) // �ּڰ��� ��ȯ�ϴ� �Լ�
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

void show_numbers(int *arr,int num) // ����� �������� �����ִ� �Լ�
{
	for (int i = 0; i < num; i++)
	{
		printf(" %d", arr[i]);
	}



	printf("\n");
}

int main()
{
	int num = 0; // ����ڿ��� �Է¹��� ��
	int *arr; // ������ ������ �迭

	srand(time(NULL));

	printf("�Է��� ������ ���� : ");
	scanf("%d", &num);


	arr = (int*)malloc(sizeof(int) * num); // �迭�� num ��ŭ �޸� ���� �Ҵ�



	printf("����� ������ : ");
	for (int i = 0; i < num; i++)
	{
		int n = rand() % 100 + 1; // ���� ���� �� �迭�� ����
		arr[i] = n;
	}

	show_numbers(arr, num);

	printf("�ּڰ� : %d \n", getMin(arr, num));
	printf("�ִ� : %d \n", getMax(arr, num));



	return 0;

}
