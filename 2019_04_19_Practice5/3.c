/*
	실습 7주차 3.c
	2019-04-19
	2018112314
	홍종현
*/

#include <stdio.h>

typedef enum {
	false = 0,
	true = 1
}bool; // Bool 타입 정의.

int main()
{
	float num1 = 0, num2 = 0;
	char op; //연산자(+, -, *, /)를  저장하는 변수
	bool quit = false;


	do
	{
		printf("수식을 입력하세요. ( 예 : 2+5 ) : ");
		int d = scanf("%f", &num1);
		if (d == 1) // num1에 정상적인 값이 입력됐을 시
		{
			scanf("%c %f", &op, &num2);
			switch (op)
			{
			case '+': //덧셈 연산의 결과값 출력
				printf("%.0f + %.0f = %.0f 입니다. \n", num1, num2, num1 + num2);
				break;

			case '-': //뺄셈 연산의 결과값 출력
				printf("%.0f - %.0f = %.0f 입니다. \n", num1, num2, num1 - num2);
				break;

			case '*': //곱셈 연산의 결과값 출력
				printf("%.0f * %.0f = %.0f 입니다. \n", num1, num2, num1 * num2);
				break;

			case '/': //나눗셈 연산의 결과값 출력
				if (num2 == 0)
				{
					printf("분모가 0이 될 수 없습니다. \n"); // 나눗셈의 경우 분모가 0이 될시 탈출.
					break;
				}
				printf("%.0f / %.0f = %.2f 입니다. \n", num1, num2, num1 / num2);
				break;

			default:
				printf("연산이 없습니다. (+,-,*,/) 중 하나를 선택해주세요. \n"); // 연산자 없을 시.
				break;
			}
			

		}

		else // num1에 문자가 입력됬을 시
		{
			char c;
			scanf("%c", &c);

			if (c == 'q')
			{
				printf("프로그램이 종료되었습니다. \n");
				quit = true;
			}

		}

	} while (quit != true);

}


