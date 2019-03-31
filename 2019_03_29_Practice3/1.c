/*
	실습 4주차 1.c
	2019-03-29
	2018112314
	홍종현
*/

#include <stdio.h>
#define true 1
#define false 0

typedef unsigned int bool;

bool has(int numArr[], int num) // numArr와 num 비교하는 함수
{
	int i = 0;

	while (numArr[i] != '\0') // numArr 가 NULL이 아닐때까지 반복
	{ 
		if (numArr[i] == num)
		{
			return true;
			break;
		}
		
		i++;
		
	}

	return false;

}


int main()
{
	int numArr[5] = { 1,2,3,4,5 }; // 저장된 숫자들
	int num = 0; // 비교할 숫자


	printf("저장된 숫자들 : ");
	
	for (int i = 0; i < 5; i++)
	{
		printf(" [%d]", numArr[i]);
	}

	printf("\n숫자를 입력하시오 : ");
	scanf_s("%d", &num);


	if (has(numArr, num)) // 저장된 숫자들과 비교할 숫자를 비교
	{
		printf("있음\n");
	}
	else
	{
		printf("없음\n");
	}
	

	return 0;

}
