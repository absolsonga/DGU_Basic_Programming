/*
	�ǽ� 4���� 1.c
	2019-03-29
	2018112314
	ȫ����
*/

#include <stdio.h>
#define true 1
#define false 0

typedef unsigned int bool;

bool has(int numArr[], int num) // numArr�� num ���ϴ� �Լ�
{
	int i = 0;

	while (numArr[i] != '\0') // numArr �� NULL�� �ƴҶ����� �ݺ�
	{ 
		if (numArr[i] == num)
		{
			return true;
			break;
		}
		
		i++;
		
	}

	return false;

}


int main()
{
	int numArr[5] = { 1,2,3,4,5 }; // ����� ���ڵ�
	int num = 0; // ���� ����


	printf("����� ���ڵ� : ");
	
	for (int i = 0; i < 5; i++)
	{
		printf(" [%d]", numArr[i]);
	}

	printf("\n���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);


	if (has(numArr, num)) // ����� ���ڵ�� ���� ���ڸ� ��
	{
		printf("����\n");
	}
	else
	{
		printf("����\n");
	}
	

	return 0;

}
