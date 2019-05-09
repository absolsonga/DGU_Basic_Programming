/*
	실습 9주차 3.c
	2019-05-03
	2018112314
	홍종현
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(NULL));

	int ans = rand() % 101;

	int up = 100, down = 0; // up & down에서 사용할 변수
	int n = 0; // n은 사용자에게 입력받을 정수

	FILE *fwp = fopen("c:/test/randomgame.txt", "w"); // 본 출력문의 내용을 파일로 저장.

	printf("ans : %d\n", ans);
	fprintf(fwp, "ans : %d\n", ans);


	while (1)
	{

		printf("정답은 %d 과 %d 사이입니다.\n", down, up);
		fprintf(fwp, "정답은 %d 과 %d 사이입니다.\n", down, up);

		printf("정답을 입력하시오 : ");
		fprintf(fwp, "정답을 입력하시오 : "); // 각각의 printf 문을 file로도 저장하기 위해 다시 한번 써줌.

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