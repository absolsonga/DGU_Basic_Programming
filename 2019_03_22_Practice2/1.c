/*
	�ǽ� 3���� 1.c
	2019-03-22
	2018112314
	ȫ����
*/


#include <stdio.h>

int isLeapYear(int year) // ������ �������� ��ȯ�ϴ� �Լ�
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

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &year);

	if (isLeapYear(year))
	{
		printf("%d ���� �����Դϴ�.\n", year);
	}
	else 
	{
		printf("%d ���� ����Դϴ�.\n", year);
	}




}