/*
	실습 3주차 3.c
	2019-03-22
	2018112314
	홍종현
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


void rsp(char *a, char *b) // 가위바위보 로직 처리 함수
{

	if( strcmp(a, "가위") == 0)
	{
		if (strcmp(b, "보") == 0)
		{
			printf("A의 승리 ! \n");
		}
		else if (strcmp(b, "바위") == 0)
		{
			printf("B의 승리 ! \n");
		}
		else if (strcmp(a, b) == 0)
		{
			printf("무승부 \n");
		}
	}
	else if (strcmp(a, "바위") == 0)
	{
		if (strcmp(b, "가위") == 0)
		{
			printf("A의 승리 ! \n");
		}
		else if (strcmp(b, "보") == 0)
		{
			printf("B의 승리 ! \n");
		}
		else if (strcmp(a,b) == 0)
		{
			printf("무승부 \n");
		}

	}
	else if (strcmp(a, "보") == 0)
	{
		if (strcmp(b, "바위") == 0)
		{
			printf("A의 승리 ! \n");
		}
		else if (strcmp(b, "가위") == 0)
		{
			printf("B의 승리 ! \n");
		}
		else if (strcmp(a, b) == 0)
		{
			printf("무승부 \n");
		}

	}

}
