/*
	�ǽ� 3���� 3.c
	2019-03-22
	2018112314
	ȫ����
*/


#include <stdio.h>


void rsp();

int main()
{
	char a[10], b[10];
	
	printf("A : ");
	gets(a, sizeof(a));

	printf("B : ");
	gets(b, sizeof(b));
	
	rsp(a, b);

	return 0;

}


void rsp(char *a, char *b) // ���������� ���� ó�� �Լ�
{

	if( strcmp(a, "����") == 0)
	{
		if (strcmp(b, "��") == 0)
		{
			printf("A�� �¸� ! \n");
		}
		else if (strcmp(b, "����") == 0)
		{
			printf("B�� �¸� ! \n");
		}
		else if (strcmp(a, b) == 0)
		{
			printf("���º� \n");
		}
	}
	else if (strcmp(a, "����") == 0)
	{
		if (strcmp(b, "����") == 0)
		{
			printf("A�� �¸� ! \n");
		}
		else if (strcmp(b, "��") == 0)
		{
			printf("B�� �¸� ! \n");
		}
		else if (strcmp(a,b) == 0)
		{
			printf("���º� \n");
		}

	}
	else if (strcmp(a, "��") == 0)
	{
		if (strcmp(b, "����") == 0)
		{
			printf("A�� �¸� ! \n");
		}
		else if (strcmp(b, "����") == 0)
		{
			printf("B�� �¸� ! \n");
		}
		else if (strcmp(a, b) == 0)
		{
			printf("���º� \n");
		}

	}

}
