#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	Q3. p177 프로그램 수정
		1. 입력함수 2이상의 정수를 입력하시오. : 100
		2. 출력함수 2 3 5 7 11 */
/*
int InputFunc(void);
void OutputFunc(int number);

int main()
{
	int number = InputFunc();

	OutputFunc(number);

	return 0;
}

int InputFunc()
{
	int number;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &number);

	return number;
}


void OutputFunc(int number)
{
	int i, j, a = 0;

	for (i = 2; i <= number; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0) break;
		}

		if (i == j)
		{
			printf("%5d", i);
			a = a + 1;
		}

		if (a == 5)
		{
			printf("\n");
			a = 0;
		}
	}
}
*/

/*
Q3. 입력받은 값의 절대값을 구하는 함수 abs()를 구현하라.
	ex> 종료하려면 0을 입력하시오.
		정수 입력 : -34
		절대값은 : 34 */

//int abs(int number);
//
//int main()
//{
//	int n;
//
//	printf("종료하려면 0을 입력하시오.\n정수 입력 : ");
//	scanf("%d", &n);
//
//	if (n != 0)
//	{
//		n = abs(n);
//
//		printf("절대값은 : %d\n", n);
//		//printf("절대값은 : %d\n", abs(n));
//	}
//	return 0;
//}
//
//int abs(int number)
//{
//	if (number < 0)
//	{
//		number = -number;
//		/*오답노트
//		return -number;
//		*/
//	}
//	/*else
//	{
//		number = number;
//	}*/
//
//	return number;
//}

/* Q4. p.206, Q5. 팩토리얼 계산을 재귀호출함수를 이용해서 수정하라.*/
int rec_func1(int n);
int rec_func2(int m);
int result1, result2 = 1;

int main()
{
	int n, m;

	printf("1부터 일정 수(n)까지의 합\n일정 수(n) : ");
	scanf("%d", &n);

	printf("%d\n\n", rec_func1(n));

	printf("1부터 일정 수(m)까지의 곱\n일정 수(m) : ");
	scanf("%d", &m);

	printf("%d\n", rec_func2(m));
}

// Q4
int rec_func1(int n)
{
	/*if (n < 1) return result1;
	result1 = result1 + n;
	
	rec_func1(n - 1);*/

	// result1 변수 안 쓰기
	if (n < 1) return n;

	return n + rec_func1(n - 1);
}

// Q5
int rec_func2(int m)
{
	/*if (m < 1) return result2;
	result2 = result2 * m;
	
	rec_func2(m - 1);*/

	// result2 변수 안 쓰기
	if (m < 1) return m + 1;

	return m * rec_func2(m - 1);
}

/*
Q6. 달팽이 한 마리가 한 달이 지나면 어른이 되고
	다시 한 달이 지나면 새끼를 낳는다.
	새로 태어난 달팽이 역시 한 달이 지나면 어른이 되고
	다시 한 달 후 부터 새끼를 낳는다고 할 때, 달팽이가 매 달 새끼를 낳으면
	1년 후 전체 달팽이의 수는 얼마인지 알 수 있도록 프로그램을 작성하라.
	(가정1. 달팽이는 자웅동체이다.
	 가정2. 달팽이는 1년 만에 죽을 일은 없다.)*/

//int numSnail(int adult, int children, int Month);
//
//int main()
//{
//	int adult = 0, children = 1, Month = 1;
//	//int adult = 0, children = 1, Month = 12;
//
//	printf("1년 후 전체 달팽이 수 : %d\n", numSnail(adult, children, Month));
//
//	return 0;
//}
//
//int numSnail(int adult, int children, int Month)
//{
//	if (Month > 12) return adult + children;
//	//if (Month < 1) return adult + children;
//
//	numSnail(adult + children, adult, Month + 1);
//	//numSnail(adult + children, adult, Month - 1);
//}

/*
Q7. 사칙연산을 위한 프로그램을 작성하라. 출력 형태는 다음과 같다.
	ex) 원하는 연산을 선택하시오 : 
		(1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈, 0: 종료)
		입력
		> 1
		> 두 정수를 입력하시오 : 00 00
		> 결과는 00 입니다.*/

//int sum(int a, int b); // 덧셈
//int sub(int a, int b); // 뺄셈
//int mul(int a, int b); // 곱셈
//int div(int a, int b); // 나눗셈
//
//int main()
//{
//	int n, a, b;
//
//	while(1)
//	{
//		printf("원하는 연산을 선택하시오 : \n(1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈, 0: 종료)\n> ");
//		scanf("%d", &n);
//
//		if (n == 0) break;
//
//		printf("> 두 정수를 입력하시오 : ");
//		scanf("%d %d", &a, &b);
//
//		switch (n)
//		{
//		case 1:
//			printf("> 결과는 %d 입니다.\n\n", sum(a, b));
//			break;
//		case 2:
//			printf("> 결과는 %d 입니다.\n\n", sub(a, b));
//			break;
//		case 3:
//			printf("> 결과는 %d 입니다.\n\n", mul(a, b));
//			break;
//		case 4:
//			printf("> 결과는 %d 입니다.\n\n", div(a, b));
//			break;
//		}
//	} 
//
//	return 0;
//}
//
//int sum(int a, int b)
//{
//	return a + b;
//}
//
//int sub(int a, int b)
//{
//	return a - b;
//}
//
//int mul(int a, int b)
//{
//	return a * b;
//}
//
//int div(int a, int b)
//{
//	return a / b;
//}