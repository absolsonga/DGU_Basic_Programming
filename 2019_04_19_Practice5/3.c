/*
	�ǽ� 7���� 3.c
	2019-04-19
	2018112314
	ȫ����
*/

#include <stdio.h>

typedef enum {
	false = 0,
	true = 1
}bool; // Bool Ÿ�� ����.

int main()
{
	float num1 = 0, num2 = 0;
	char op; //������(+, -, *, /)��  �����ϴ� ����
	bool quit = false;


	do
	{
		printf("������ �Է��ϼ���. ( �� : 2+5 ) : ");
		int d = scanf("%f", &num1);
		if (d == 1) // num1�� �������� ���� �Էµ��� ��
		{
			scanf("%c %f", &op, &num2);
			switch (op)
			{
			case '+': //���� ������ ����� ���
				printf("%.0f + %.0f = %.0f �Դϴ�. \n", num1, num2, num1 + num2);
				break;

			case '-': //���� ������ ����� ���
				printf("%.0f - %.0f = %.0f �Դϴ�. \n", num1, num2, num1 - num2);
				break;

			case '*': //���� ������ ����� ���
				printf("%.0f * %.0f = %.0f �Դϴ�. \n", num1, num2, num1 * num2);
				break;

			case '/': //������ ������ ����� ���
				if (num2 == 0)
				{
					printf("�и� 0�� �� �� �����ϴ�. \n"); // �������� ��� �и� 0�� �ɽ� Ż��.
					break;
				}
				printf("%.0f / %.0f = %.2f �Դϴ�. \n", num1, num2, num1 / num2);
				break;

			default:
				printf("������ �����ϴ�. (+,-,*,/) �� �ϳ��� �������ּ���. \n"); // ������ ���� ��.
				break;
			}
			

		}

		else // num1�� ���ڰ� �Է��� ��
		{
			char c;
			scanf("%c", &c);

			if (c == 'q')
			{
				printf("���α׷��� ����Ǿ����ϴ�. \n");
				quit = true;
			}

		}

	} while (quit != true);

}


