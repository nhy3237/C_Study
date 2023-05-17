#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
/*
	Q3. p177 ���α׷� ����
		1. �Է��Լ� 2�̻��� ������ �Է��Ͻÿ�. : 100
		2. ����Լ� 2 3 5 7 11 */
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

	printf("2 �̻��� ������ �Է��ϼ��� : ");
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
Q3. �Է¹��� ���� ���밪�� ���ϴ� �Լ� abs()�� �����϶�.
	ex> �����Ϸ��� 0�� �Է��Ͻÿ�.
		���� �Է� : -34
		���밪�� : 34 */

//int abs(int number);
//
//int main()
//{
//	int n;
//
//	printf("�����Ϸ��� 0�� �Է��Ͻÿ�.\n���� �Է� : ");
//	scanf("%d", &n);
//
//	if (n != 0)
//	{
//		n = abs(n);
//
//		printf("���밪�� : %d\n", n);
//		//printf("���밪�� : %d\n", abs(n));
//	}
//	return 0;
//}
//
//int abs(int number)
//{
//	if (number < 0)
//	{
//		number = -number;
//		/*�����Ʈ
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

/* Q4. p.206, Q5. ���丮�� ����� ���ȣ���Լ��� �̿��ؼ� �����϶�.*/
int rec_func1(int n);
int rec_func2(int m);
int result1, result2 = 1;

int main()
{
	int n, m;

	printf("1���� ���� ��(n)������ ��\n���� ��(n) : ");
	scanf("%d", &n);

	printf("%d\n\n", rec_func1(n));

	printf("1���� ���� ��(m)������ ��\n���� ��(m) : ");
	scanf("%d", &m);

	printf("%d\n", rec_func2(m));
}

// Q4
int rec_func1(int n)
{
	/*if (n < 1) return result1;
	result1 = result1 + n;
	
	rec_func1(n - 1);*/

	// result1 ���� �� ����
	if (n < 1) return n;

	return n + rec_func1(n - 1);
}

// Q5
int rec_func2(int m)
{
	/*if (m < 1) return result2;
	result2 = result2 * m;
	
	rec_func2(m - 1);*/

	// result2 ���� �� ����
	if (m < 1) return m + 1;

	return m * rec_func2(m - 1);
}

/*
Q6. ������ �� ������ �� ���� ������ ��� �ǰ�
	�ٽ� �� ���� ������ ������ ���´�.
	���� �¾ ������ ���� �� ���� ������ ��� �ǰ�
	�ٽ� �� �� �� ���� ������ ���´ٰ� �� ��, �����̰� �� �� ������ ������
	1�� �� ��ü �������� ���� ������ �� �� �ֵ��� ���α׷��� �ۼ��϶�.
	(����1. �����̴� �ڿ���ü�̴�.
	 ����2. �����̴� 1�� ���� ���� ���� ����.)*/

//int numSnail(int adult, int children, int Month);
//
//int main()
//{
//	int adult = 0, children = 1, Month = 1;
//	//int adult = 0, children = 1, Month = 12;
//
//	printf("1�� �� ��ü ������ �� : %d\n", numSnail(adult, children, Month));
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
Q7. ��Ģ������ ���� ���α׷��� �ۼ��϶�. ��� ���´� ������ ����.
	ex) ���ϴ� ������ �����Ͻÿ� : 
		(1: ����, 2: ����, 3: ����, 4: ������, 0: ����)
		�Է�
		> 1
		> �� ������ �Է��Ͻÿ� : 00 00
		> ����� 00 �Դϴ�.*/

//int sum(int a, int b); // ����
//int sub(int a, int b); // ����
//int mul(int a, int b); // ����
//int div(int a, int b); // ������
//
//int main()
//{
//	int n, a, b;
//
//	while(1)
//	{
//		printf("���ϴ� ������ �����Ͻÿ� : \n(1: ����, 2: ����, 3: ����, 4: ������, 0: ����)\n> ");
//		scanf("%d", &n);
//
//		if (n == 0) break;
//
//		printf("> �� ������ �Է��Ͻÿ� : ");
//		scanf("%d %d", &a, &b);
//
//		switch (n)
//		{
//		case 1:
//			printf("> ����� %d �Դϴ�.\n\n", sum(a, b));
//			break;
//		case 2:
//			printf("> ����� %d �Դϴ�.\n\n", sub(a, b));
//			break;
//		case 3:
//			printf("> ����� %d �Դϴ�.\n\n", mul(a, b));
//			break;
//		case 4:
//			printf("> ����� %d �Դϴ�.\n\n", div(a, b));
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