/*
	�ǽ� 7���� 1.c
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

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &max);
	
	printf("(0~10) ������ ����� �Է��Ͻÿ� : ");
	scanf("%d", &multiple);


add: // goto �� ���.
	if (num % multiple == 0)
	{
		sum += num;
	}

	if (num < max)
	{
		num++;
		goto add;
	}

	

	printf("sum : %d", sum);

	return 0;
}

