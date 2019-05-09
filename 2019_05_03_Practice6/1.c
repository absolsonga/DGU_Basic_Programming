/*
	실습 9주차 1.c
	2019-05-03
	2018112314
	홍종현
*/

#include <stdio.h>

int factorial(int n)
{
	if (n == 1)
		return 1;

	if (n > 0)
	{
		return n * factorial(n - 1);
	}

}


int main()
{
	int n; // 사용자에게 입력받을 정수.

	printf("정수를 입력하세요 : ");
	scanf("%d", &n);

	printf("%d! 은 %d 입니다.\n", n, factorial(n));

	return 0;
}
