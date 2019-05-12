/*
	실습 10주차 2.c
	2019-05-10
	2018112314
	홍종현
*/

#include <stdio.h>
int fact(int n); // 팩토리얼을 구하는 재귀함수 원형

int main()
{
	
	int n = 0, r = 0; // 입력값
	int C = 0; // 결과값


	printf("정수 n을 입력해 주세요 : ");
	scanf("%d", &n);


	printf("정수 r을 입력해 주세요 : ");
	scanf("%d", &r);


	C = fact(n) / (fact(n - r) * fact(r)); // 조합의 수를 계싼하는 공식

	
	printf("C(%d,%d) = %d 입니다.\n ",n,r,C);

	return 0;
}



int fact(int n) // 팩토리얼을 구해주는 함수.
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * fact(n - 1);
	}
}