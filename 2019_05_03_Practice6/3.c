/*
	�ǽ� 9���� 3.c
	2019-05-03
	2018112314
	ȫ����
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));

	int ans = rand() % 101;

	int up = 100, down = 0; // up & down���� ����� ����
	int n = 0; // n�� ����ڿ��� �Է¹��� ����

	FILE *fwp = fopen("c:/test/randomgame.txt", "w"); // �� ��¹��� ������ ���Ϸ� ����.

	printf("ans : %d\n", ans);
	fprintf(fwp, "ans : %d\n", ans);


	while (1)
	{

		printf("������ %d �� %d �����Դϴ�.\n", down, up);
		fprintf(fwp, "������ %d �� %d �����Դϴ�.\n", down, up);

		printf("������ �Է��Ͻÿ� : ");
		fprintf(fwp, "������ �Է��Ͻÿ� : "); // ������ printf ���� file�ε� �����ϱ� ���� �ٽ� �ѹ� ����.

		scanf("%d", &n);
		fprintf(fwp, "%d\n", n);


		if (ans > n)
		{
			down = n;
		}
		else if (ans < n)
		{
			up = n;
		}
		else
		{
			break;
		}

	}

	fclose(fwp);
	return 0;
}