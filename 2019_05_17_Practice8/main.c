/*
	실습 11주차 과제
	2019-05-17
	2018112314
	홍종현
*/

#include <stdio.h>
#include "student.h"
#define MAX_SIZE 100

extern int std_size;

typedef enum {
	false = 0,
	true = 1
}bool; // Bool 타입 정의.

void main()
{
	char ch; // choice 변수
	int s_ch; // Search,Sort를 정하는 choice 변수

	bool quit = false;


	int sid; // 학번
	char name[10]; // 이름
	int age; // 나이
	char grade[10]; // 성적
	   

	struct student *s[MAX_SIZE]; // 학생 정보를 담는 변수

	// 변수에 메모리 할당 , MAXSIZE 만큼 할당됨.
	for (int i = 0; i < MAX_SIZE; i++)
	{
		s[i] = (struct student *)malloc(sizeof(struct student));
	}


	FILE *frp = fopen("c:/data/input.txt", "r");
	FILE *fwp = fopen("c:/data/output.txt", "w"); // 구조체의 내용을 파일로 저장.


	read(s, frp); // 초기 파일에서 학생정보를 읽고 학생구조체 변수에 저장

	printf("All files are read !\n\n");


	do
	{
		// printf("\n학생수 : %d\n", std_size);

		printf("\n<==== MENU ====> \n");
		printf("+: 학생 입력\n");
		printf("s: 검색 또는 정렬\n");
		printf("p: 모든 학생 출력\n");
		printf("w: output.txt 파일에 저장 \n");
		printf("q: 프로그램 종료\n");

		scanf(" %c", &ch);

		switch (ch)
		{
			case '+':
				printf("학번 :"); scanf("%d", &sid);
				printf("이름 :"); scanf("%s", name);
				printf("나이 :"); scanf("%d", &age);
				printf("성적 :"); scanf("%s", grade);

				insert(s, sid, name, age, grade); // 구조체 변수에 데이터를 추가하는 함수.
				break;

			case 's':
			case 'S':
				printf("검색 기준 : 1. 학번 2. 이름 \n");
				printf("정렬 기준 : 3. 나이 4. 성적 \n");
				scanf(" %d", &s_ch);
					
				if (s_ch == 1)
				{
					printf("학번 입력 :");
					scanf("%d", &sid);
					search_id(s, sid);			
				}
				else if (s_ch == 2)
				{
					printf("이름 입력 :");
					scanf("%s", name);
					search_name(s, name);
				}
				else if (s_ch == 3)
				{
					printf("나이순으로 정렬합니다. \n");
					sort_age(s);
				}
				else if (s_ch == 4)
				{
					printf("성적순으로 정렬합니다. \n");
					sort_grade(s);
				}
				else
				{
					printf("정확히 입력해주세요 ! \n");
				}

				break;

			case 'p':
			case 'P':
				printf("\n<< 현재 학생 목록 >>\n");
				for (int i = 0; i < std_size; i++)
				{
					printf("%d %s %d %s \n", s[i]->sid, s[i]->name, s[i]->age, s[i]->grade);
				}
				break;


			case 'w':
			case 'W':
				printf("현재 구조체가 output.txt 파일에 저장되었습니다 !\n");
				write(s, fwp);

				break;

			case 'q':
			case 'Q':
				quit = true;
				break;

			default:
				printf("정확히 입력해주세요 ! \n");
				break;
				

		}

	}while (quit != true);

}

