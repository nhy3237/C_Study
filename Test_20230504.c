#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main()
{
	/*
	Q1. ���̰� 5�� int�� �迭�� �����ϰ�, ����ڷκ��� 5���� ������ �Է¹޾� ������ ������ ����ϴ� ���α׷��� �ۼ��϶�.
		1. �Էµ� ���� �� �ִ밪
		2. �Էµ� ���� �� �ּҰ�
		3. �Էµ� �������� ���� */

	/*int n[5];
	int i, Min = 0, Max = 0, Sum = 0;


	int count = sizeof(n) / sizeof(n[0]);

	printf("5���� ������ �Է��ϼ���.\n> ");

	for (i = 0; i < count; i++)
	{
		scanf("%d", &n[i]);

		if ((i == 0) || (Min > n[i]))
		{
			Min = n[i];
		}

		if (i == 0 || Max < n[i])
		{
			Max = n[i];
		}

		Sum += n[i];
	}

	printf("\n�Էµ� ���� �� �ִ밪 : %d\n", Max);
	printf("�Էµ� ���� �� �ּҰ� : %d\n", Min);
	printf("�Էµ� �������� ���� : %d\n", Sum);*/

	/*
	Q2. p.232 ��ҹ��� ��ȯ ���α׷��� �ۼ��϶�. */

	//char str[80], str1[80], str2[80];
	//int i, num, n1 = 0, n2 = 0;
	//int count = sizeof(str) / sizeof(str[0]);

	//printf("���� �Է� : ");
	//gets(str);
	//
	////�ҹ���
	//for (i = 0; i < count; i++)
	//{
	//	if (str[i] > 64 && str[i] < 97)
	//	{
	//		//num = (int)str[i] + 32;
	//		//str1[i] = (char)num;

	//		str1[i] = str[i] + 32;
	//		str1[i + 1] = '\0';

	//		n1++;
	//	}
	//	else
	//	{
	//		str1[i] = str[i];
	//	}

	//	if (i + 1 == count) str1[i] = "\0";
	//}

	////�빮��
	//for (i = 0; i < count; i++)
	//{
	//	if (str[i] > 96 && str[i] < 123)
	//	{
	//		//num = (int)str[i] - 32;
	//		//str2[i] = (char)num;
	//		//str2[i + 1] = '\0';

	//		str2[i] = str[i] - 32;
	//		str2[i + 1] = '\0';

	//		n2++;
	//	}
	//	else
	//	{
	//		str2[i] = str[i];
	//	}

	//	if (i + 1 == count) str2[i] = "\0";
	//}

	//printf("\n�ҹ��ڷ� �ٲ� ���� : %s\n", str1);
	//printf("�ҹ��ڷ� �ٲ� ���� �� : %d\n\n", n1);
	//printf("�빮�ڷ� �ٲ� ���� : %s\n", str2);
	//printf("�ҹ��ڷ� �ٲ� ���� �� : %d\n", n2);

	/*
	Q3. ���ڿ��� �Է� �޾Ƽ� ������ ���ڿ��� �귯������ ��µǴ� ���¿� ���� ���α׷��� �ۼ��϶�.
		ex) hello
		>>ello h
		>>llo he
		>>lo hel
		>>o hell
		>>hello */

	char str[80];

	int size = sizeof(str) / sizeof(str[0]);
	gets(str);

	strcat(str, " ");

	while (1)
	{
		Sleep(100);
		system("cls");
		char last = str[0];

		for (int i = 0; i < size; i++)
		{
			str[i] = str[i + 1];

 			if (str[i] == '\0')
			{
				str[i] = last;
				str[i + 1] = '\0';
				break;
			}
			printf("%c", str[i]);
		}
		//puts(str);
	}

	/*
	Q4. int�� num1, num2 �� ����� ���ÿ� 10�� 20���� �ʱ�ȭ ���ְ�,
		int�� ������ ptr1, ptr2�� �����ϰ� �� num1�� num2�� �̿��ؼ�
		num1�� 10 ����, num2�� 10 �����ϰ� �Ѵ�.
		���� ptr1�� ptr2�� ����Ű�� ����� ���� �ٲ۴�.
		���������� ptr1�� ptr2�� ����Ű�� ������ ������ ����Ѵ�.
		�� ���� num1, num2�� ����ؼ� ����� ���� ������ Ȯ���Ѵ�. */

	//int num1 = 10, num2 = 20;
	//int* ptr1 = &num1;
	//int* ptr2 = &num2;

	////int n;

	//*ptr1 = num1 + 10;
	//*ptr2 = num2 - 10;

	///*n = ptr1;
	//ptr1 = ptr2;
	//ptr2 = n;*/

	//ptr1 = &num2;
	//ptr2 = &num1;
	//
	//printf("������ ptr1�� ����Ű�� ������ ���� : %d\n", *ptr1);
	//printf("������ ptr2�� ����Ű�� ������ ���� : %d\n\n", *ptr2);
	//printf("num1 : %d, num2 : %d\n", num1, num2);

	/* Q5. p261 */
	//double max, mid, min;

	//printf("�Ǽ��� 3�� �Է� : ");
	//scanf("%lf%lf%lf", &max, &mid, &min);
	//line_up(&max, &mid, &min);
	//printf("���ĵ� �� ��� : %.1lf, %.1lf, %.1lf\n", max, mid, min);
	//
	//return 0;
}

void swap(double* pa, double* pb)
{
	double temp;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double* maxp, double* midp, double* minp)
{
	if (*maxp < *midp)
	{
		swap(maxp, midp);
	}

	if (*maxp < *minp)
	{
		swap(maxp, minp);
	}

	if (*minp > *midp)
	{
		swap(minp, midp);
	}
}