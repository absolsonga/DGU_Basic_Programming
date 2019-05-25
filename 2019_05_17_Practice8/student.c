#include "student.h"


void insert(struct student *s[],int sid,char name[10],int age,char grade[10]) // 콘솔에서 입력받은 정보를 구조체에 저장함.
{

	s[std_size]->sid = sid;
	strcpy(s[std_size]->name, name);
	s[std_size]->age = age;
	strcpy(s[std_size]->grade, grade);
	std_size++;
	
}



// 파일에서 학생 수 만큼 읽어들임
void read(struct student *s[], FILE *frp)
{

	int sid;
	char name[10];
	int age;
	char grade[10];

	while (fscanf(frp, "%d %s %d %s", &sid, name, &age,grade) == 4)
	{
		s[std_size]->sid = sid;
		strcpy(s[std_size]->name, name);
		s[std_size]->age = age;
		strcpy(s[std_size]->grade, grade);
		std_size++;

	}
}


void write(struct student *s[], FILE *fwp) // 현재 구조체의 정보를 output.txt 파일에 저장함.
{
	for (int i = 0; i < std_size; i++)
	{
		fprintf(fwp,"%d %s %d %s \n", s[i]->sid, s[i]->name, s[i]->age, s[i]->grade);
	}
}




void search_id(struct student *s[], int sid) // 순차탐색 방식으로 탐색.
{
	for (int i = 0; i < std_size; i++)
	{
		if (sid == s[i]->sid)
		{
			printf("%d %s %d %s \n", s[i]->sid, s[i]->name, s[i]->age, s[i]->grade);

		}
	}

}


void search_name(struct student *s[], char name[10])
{

	for (int i = 0; i < std_size; i++)
	{
		if (strcmp(name,s[i]->name) == 0)
		{
			printf("%d %s %d %s \n", s[i]->sid, s[i]->name, s[i]->age, s[i]->grade);

		}
	}
}

void sort_age(struct student *s[]) // 버블정렬을 통해 정렬.
{

	int tmp_sid = 0;
	char tmp_name[10] = "NULL";
	int tmp_age = 0;
	char tmp_grade[10] = "A";
	

	for (int i = 0; i < std_size; i++)
	{
		for (int j = 0; j < std_size-1; j++)
		{
			if (s[j]->age > s[j + 1]->age)
			{

				

				tmp_age = s[j]->age;
				s[j]->age = s[j + 1]->age;
				s[j + 1]->age = tmp_age;

				strcpy(tmp_name, s[j]->name);
				strcpy(s[j]->name, s[j+1]->name);
				strcpy(s[j + 1]->name, tmp_name);

				tmp_sid = s[j]->sid;
				s[j]->sid = s[j + 1]->sid;
				s[j + 1]->sid = tmp_sid;

				strcpy(tmp_grade, s[j]->grade);
				strcpy(s[j]->grade, s[j + 1]->grade);
				strcpy(s[j + 1]->grade, tmp_grade);
				
				
			}

		}
	}
}

void sort_grade(struct student *s[]) // 버블정렬을 통해 정렬.
{

	
	
	for (int i = 0; i < std_size-1; i++)
	{
		for (int j = i+1; j < std_size ; j++)
		{
			if (strcmp(s[i]->grade , s[j]->grade)==-1)
			{
				struct student *tempS = s[i];
				s[i] = s[j];
				s[j] = tempS;


			
			}

		}
	}
}