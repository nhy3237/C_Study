#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_str(char** ps);

struct profile
{
	int age;
	double height;
};

struct student
{
	struct profile pf;
	int num;
	int id;
	double grade;
};

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

struct list
{
	int num;
	struct list* next;
};

enum season {SPRING, SUMMER, FALL, WINTER};

typedef struct list stList;

//int main()
//{
	// 16-4)
	/*char temp[80];
	char* str[3] = { 0 };
	int i;

	for (i = 0; i < 3; i++)
	{	
		printf("문자열을 입력하세요 : ");
		gets(temp);
		str[i] = (char*)malloc(sizeof(temp) + 1);
		if (str[i] == NULL)
		{
			exit(1);
		}
		strcpy(str[i], temp);
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}*/

	// 16-5)
/*	char temp[80];
	char* str[21] = { 0 };
	int i = 0;

	while (i < 25)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}

	return 0;
}*/

// 16-6)
/*int main(int argc, char** argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}*/

int main()
{
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	s1.pf.age = 17;
	s1.pf.height = 164.5;
	s1.id = 315;
	s1.grade = 4.3;

	printf("나이 : %d\n", s1.pf.age);
	printf("키 : %.1lf\n", s1.pf.height);
	printf("학번 : %d\n", s1.id);
	printf("학점 : %.1lf\n\n", s1.grade);

	// 17-7
	struct address list[5];

	/*for (int i = 0; i < 5; i++)
	{
		printf("이름 : ");
		scanf("%s", &list[i].name);
		printf("나이 : ");
		scanf("%d", &list[i].age);
		printf("전화번호 : ");
		scanf("%s", &list[i].tel);
		printf("주소 : ");
		gets(&list[i].addr);
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}*/

	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list* head = &a, * current;

	/*c.num = 30;
	c.next = NULL;*/

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);

	printf("list all : ");
	current = head;

	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n\n");

	enum season ss;
	char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}

	printf("나의 레저 활동 => %s\n\n", pc);

	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}