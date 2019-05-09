/*
	실습 9주차 2.c
	2019-05-03
	2018112314
	홍종현
*/

#include <stdio.h>

int isprimenumber(int n);

int main()
{
	int i = 0;
	int n = 0; // n은 사용자에게 입력받을 정수

	FILE *fwp = fopen("c:/test/primenumber.txt", "w"); // 본 출력문의 내용을 파일로 저장.
	printf("종료하려면 0을 입력하시오\n");
	fprintf(fwp, "종료하려면 0을 입력하시오\n");
	while (1)
	{
		printf("숫자를 입력하시오 : ");
		fprintf(fwp, "숫자를 입력하시오 : "); // 각각의 printf 문을 file로도 저장하기 위해 다시 한번 써줌.

		scanf("%d", &n);
		fprintf(fwp, "%d\n", n);

		if (n == 0)
		{
			printf("프로그램이 종료되었습니다 !");
			fprintf(fwp, "프로그램이 종료되었습니다 !");
			break;
		}

		printf("%d 보다 작거나 같은 모든 소수 : ", n);
		fprintf(fwp, "%d 보다 작거나 같은 모든 소수 : ", n);

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

int isprimenumber(int n) // 소수를 판별하는 함수.
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