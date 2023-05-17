#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main()
{
	/*
	Q1. 길이가 5인 int형 배열을 선언하고, 사용자로부터 5개의 정수를 입력받아 다음의 내용을 출력하는 프로그램을 작성하라.
		1. 입력된 정수 중 최대값
		2. 입력된 정수 중 최소값
		3. 입력된 정수들의 총합 */

	/*int n[5];
	int i, Min = 0, Max = 0, Sum = 0;


	int count = sizeof(n) / sizeof(n[0]);

	printf("5개의 정수를 입력하세요.\n> ");

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

	printf("\n입력된 정수 중 최대값 : %d\n", Max);
	printf("입력된 정수 중 최소값 : %d\n", Min);
	printf("입력된 정수들의 총합 : %d\n", Sum);*/

	/*
	Q2. p.232 대소문자 변환 프로그램을 작성하라. */

	//char str[80], str1[80], str2[80];
	//int i, num, n1 = 0, n2 = 0;
	//int count = sizeof(str) / sizeof(str[0]);

	//printf("문장 입력 : ");
	//gets(str);
	//
	////소문자
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

	////대문자
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

	//printf("\n소문자로 바뀐 문장 : %s\n", str1);
	//printf("소문자로 바뀐 문자 수 : %d\n\n", n1);
	//printf("대문자로 바뀐 문장 : %s\n", str2);
	//printf("소문자로 바뀐 문자 수 : %d\n", n2);

	/*
	Q3. 문자열을 입력 받아서 광고판 문자열이 흘러가듯이 출력되는 형태와 같이 프로그램을 작성하라.
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
	Q4. int형 num1, num2 를 선언과 동시에 10과 20으로 초기화 해주고,
		int형 포인터 ptr1, ptr2를 선언하고 각 num1과 num2를 이용해서
		num1은 10 증가, num2는 10 감소하게 한다.
		이후 ptr1과 ptr2가 가리키는 대상을 서로 바꾼다.
		마지막으로 ptr1과 ptr2가 가리키는 변수의 내용을 출력한다.
		각 변수 num1, num2도 출력해서 저장된 값이 같은지 확인한다. */

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
	//printf("포인터 ptr1가 가리키는 변수의 내용 : %d\n", *ptr1);
	//printf("포인터 ptr2가 가리키는 변수의 내용 : %d\n\n", *ptr2);
	//printf("num1 : %d, num2 : %d\n", num1, num2);

	/* Q5. p261 */
	//double max, mid, min;

	//printf("실수값 3개 입력 : ");
	//scanf("%lf%lf%lf", &max, &mid, &min);
	//line_up(&max, &mid, &min);
	//printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);
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