/*
	�ǽ� 10���� 1.c
	2019-05-10
	2018112314
	ȫ����
*/

#include <stdio.h>

int main()
{
	int mat1[2][2] = { {2,4},{-3,6} }; // ��� 1 ����
	int mat2[2][2] = { {-1,3},{6,2} }; // ��� 2 ����


	int mulmat[2][2] = { 0, }; // ����� �ʱ�ȭ

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int p = 0; p < 2; p++)
			{
				mulmat[i][j] += mat1[i][p] * mat2[p][j];

			}
		}
	}


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf(" %d ", mulmat[i][j]);
		}
		printf("\n");
	}


	return 0;
}