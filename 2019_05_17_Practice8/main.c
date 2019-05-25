/*
	�ǽ� 11���� ����
	2019-05-17
	2018112314
	ȫ����
*/

#include <stdio.h>
#include "student.h"
#define MAX_SIZE 100

extern int std_size;

typedef enum {
	false = 0,
	true = 1
}bool; // Bool Ÿ�� ����.

void main()
{
	char ch; // choice ����
	int s_ch; // Search,Sort�� ���ϴ� choice ����

	bool quit = false;


	int sid; // �й�
	char name[10]; // �̸�
	int age; // ����
	char grade[10]; // ����
	   

	struct student *s[MAX_SIZE]; // �л� ������ ��� ����

	// ������ �޸� �Ҵ� , MAXSIZE ��ŭ �Ҵ��.
	for (int i = 0; i < MAX_SIZE; i++)
	{
		s[i] = (struct student *)malloc(sizeof(struct student));
	}


	FILE *frp = fopen("c:/data/input.txt", "r");
	FILE *fwp = fopen("c:/data/output.txt", "w"); // ����ü�� ������ ���Ϸ� ����.


	read(s, frp); // �ʱ� ���Ͽ��� �л������� �а� �л�����ü ������ ����

	printf("All files are read !\n\n");


	do
	{
		// printf("\n�л��� : %d\n", std_size);

		printf("\n<==== MENU ====> \n");
		printf("+: �л� �Է�\n");
		printf("s: �˻� �Ǵ� ����\n");
		printf("p: ��� �л� ���\n");
		printf("w: output.txt ���Ͽ� ���� \n");
		printf("q: ���α׷� ����\n");

		scanf(" %c", &ch);

		switch (ch)
		{
			case '+':
				printf("�й� :"); scanf("%d", &sid);
				printf("�̸� :"); scanf("%s", name);
				printf("���� :"); scanf("%d", &age);
				printf("���� :"); scanf("%s", grade);

				insert(s, sid, name, age, grade); // ����ü ������ �����͸� �߰��ϴ� �Լ�.
				break;

			case 's':
			case 'S':
				printf("�˻� ���� : 1. �й� 2. �̸� \n");
				printf("���� ���� : 3. ���� 4. ���� \n");
				scanf(" %d", &s_ch);
					
				if (s_ch == 1)
				{
					printf("�й� �Է� :");
					scanf("%d", &sid);
					search_id(s, sid);			
				}
				else if (s_ch == 2)
				{
					printf("�̸� �Է� :");
					scanf("%s", name);
					search_name(s, name);
				}
				else if (s_ch == 3)
				{
					printf("���̼����� �����մϴ�. \n");
					sort_age(s);
				}
				else if (s_ch == 4)
				{
					printf("���������� �����մϴ�. \n");
					sort_grade(s);
				}
				else
				{
					printf("��Ȯ�� �Է����ּ��� ! \n");
				}

				break;

			case 'p':
			case 'P':
				printf("\n<< ���� �л� ��� >>\n");
				for (int i = 0; i < std_size; i++)
				{
					printf("%d %s %d %s \n", s[i]->sid, s[i]->name, s[i]->age, s[i]->grade);
				}
				break;


			case 'w':
			case 'W':
				printf("���� ����ü�� output.txt ���Ͽ� ����Ǿ����ϴ� !\n");
				write(s, fwp);

				break;

			case 'q':
			case 'Q':
				quit = true;
				break;

			default:
				printf("��Ȯ�� �Է����ּ��� ! \n");
				break;
				

		}

	}while (quit != true);

}

