/*
	�ǽ� 9���� 2.c
	2019-05-03
	2018112314
	ȫ����
*/

#include <stdio.h>

int isprimenumber(int n);

int main()
{
	int i = 0;
	int n = 0; // n�� ����ڿ��� �Է¹��� ����

	FILE *fwp = fopen("c:/test/primenumber.txt", "w"); // �� ��¹��� ������ ���Ϸ� ����.
	printf("�����Ϸ��� 0�� �Է��Ͻÿ�\n");
	fprintf(fwp, "�����Ϸ��� 0�� �Է��Ͻÿ�\n");
	while (1)
	{
		printf("���ڸ� �Է��Ͻÿ� : ");
		fprintf(fwp, "���ڸ� �Է��Ͻÿ� : "); // ������ printf ���� file�ε� �����ϱ� ���� �ٽ� �ѹ� ����.

		scanf("%d", &n);
		fprintf(fwp, "%d\n", n);

		if (n == 0)
		{
			printf("���α׷��� ����Ǿ����ϴ� !");
			fprintf(fwp, "���α׷��� ����Ǿ����ϴ� !");
			break;
		}

		printf("%d ���� �۰ų� ���� ��� �Ҽ� : ", n);
		fprintf(fwp, "%d ���� �۰ų� ���� ��� �Ҽ� : ", n);

		for (i = 2; i <= n; i++)
		{
			if (isprimenumber(i))
			{
				printf("%d ", i);
				fprintf(fwp, "%d ", i);
			}
		}

		printf("\n");
		fprintf(fwp, "\n");

	}

	fclose(fwp);
	return 0;
}

int isprimenumber(int n) // �Ҽ��� �Ǻ��ϴ� �Լ�.
{
	if (n == 1)
	{
		return 1;
	}


	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}

	return 1;

}