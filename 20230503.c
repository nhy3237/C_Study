#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 7-1) 2개의 함수로 만든 프로그램
int sum(int x, int y); // 반환형 int, 함수명 sum, 매개변수 x, y

// 7-2) 매개변수가 없는 함수
int get_num1(void);
int get_num2(void);

// 7-3) 반환값이 없는 함수
void print_char(char ch, int count);

// 7-4) 반환값과 매개변수가 모두 없는 함수
void print_line(void);

// 7-5,6,7) 재귀호출 함수
void fruit(int count);

int main()
{
	int x = 10, y = 20;
	int s = 0;
	s = sum(x, y);
	printf("%d \n\n", s);

	int result;
	//result = get_num1();
	//printf("반환값 : %d\n", result);

	print_char('@', 5);

	print_line();
	printf("학번		이름		전공		학점\n");
	print_line();
	printf("\n");

	fruit(1);

	return 0;
}

int sum(int x, int y)
{
	int result = x + y;
	return result;
}

int get_num1(void)
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;
}

int get_num2(void)
{
	int num;

	do
	{
		printf("양수 입력 : ");
		scanf("%d", &num);
	} while (num < 0);

	return num;
}

//데이터를 받아서 출력만 하는 함수라면 반환값이 필요 없다.
void print_char(char ch, int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%c\n", ch);
	}
	printf("\n");
}

//일정한 문자열을 여러 번 출력하는 함수라면 매개변수와 반환값이 필요 없다.
void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return; //재귀 함수는 빠져 나올 수 있는 근거를 줘야 한다. (호출 횟수)
	fruit(count + 1);
	printf("jam\n"); //재귀호출 함수는 직전에 호출한 곳으로 돌아간다.
}