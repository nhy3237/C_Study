#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 7-1) 2���� �Լ��� ���� ���α׷�
int sum(int x, int y); // ��ȯ�� int, �Լ��� sum, �Ű����� x, y

// 7-2) �Ű������� ���� �Լ�
int get_num1(void);
int get_num2(void);

// 7-3) ��ȯ���� ���� �Լ�
void print_char(char ch, int count);

// 7-4) ��ȯ���� �Ű������� ��� ���� �Լ�
void print_line(void);

// 7-5,6,7) ���ȣ�� �Լ�
void fruit(int count);

int main()
{
	int x = 10, y = 20;
	int s = 0;
	s = sum(x, y);
	printf("%d \n\n", s);

	int result;
	//result = get_num1();
	//printf("��ȯ�� : %d\n", result);

	print_char('@', 5);

	print_line();
	printf("�й�		�̸�		����		����\n");
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

	printf("��� �Է� : ");
	scanf("%d", &num);

	return num;
}

int get_num2(void)
{
	int num;

	do
	{
		printf("��� �Է� : ");
		scanf("%d", &num);
	} while (num < 0);

	return num;
}

//�����͸� �޾Ƽ� ��¸� �ϴ� �Լ���� ��ȯ���� �ʿ� ����.
void print_char(char ch, int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%c\n", ch);
	}
	printf("\n");
}

//������ ���ڿ��� ���� �� ����ϴ� �Լ���� �Ű������� ��ȯ���� �ʿ� ����.
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
	if (count == 3) return; //��� �Լ��� ���� ���� �� �ִ� �ٰŸ� ��� �Ѵ�. (ȣ�� Ƚ��)
	fruit(count + 1);
	printf("jam\n"); //���ȣ�� �Լ��� ������ ȣ���� ������ ���ư���.
}