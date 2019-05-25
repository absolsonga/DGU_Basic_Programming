#pragma once
#include <stdio.h>
#ifndef STUDENT_H
#define STUDENT_H

int std_size; //학생 수를 담는 변수

struct student
{
	int sid;
	char name[10];
	int age;
	char grade[10];
};


void read(struct student *s[], FILE *frp);

void write(struct student *s[], FILE *fwp);

void insert(struct student *s[], int sid, char name[10], int age, char grade[10]);

void sort_age(struct student *s[]);

void sort_grade(struct student *s[]);

void search_id(struct student *s[],int sid);

void search_name(struct student *s[], char name[10]);


#endif