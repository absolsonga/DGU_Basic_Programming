/*
	�ǽ� 7���� 2.c
	2019-04-19
	2018112314
	ȫ����
*/

#include <stdio.h>

int main()
{
	int num = 0, max = 0; // �ʱ���� ���Ұ� num, �ִ� max
	int multiple = 0;
	int sum = 0;

	while ( 1 ) // ������ �����ϱ� ������ ���ѹݺ�
	{

		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &max);

		printf("(0~10) ������ ����� �Է��Ͻÿ� : ");
		scanf("%d", &multiple);

		if (multiple <= 10 && multiple > 0) // �־��� ���ǿ� �°� �Է����� ���� �� ó������ ���ư�. 
		{
			while (num < max) // while���� �̿��� ���� ����.
			{
				num++;
				if (num % multiple == 0) // �־��� ���� ���� ����� ���ϴ� ���ǹ�.
				{
					sum += num;
				}
			}
			break; // ������ �����ϴ� sum�� ���ϰ� �ݺ����� Ż��.
		}

	}



	printf("sum : %d", sum);

	return 0;
}

