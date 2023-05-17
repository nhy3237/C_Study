#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 15-2) ���� �����͸� ����� ������ ��ȯ
void swap_ptr(char** ppa, char** ppb);

// 15-8) �Լ� �����ͷ� ���ϴ� �Լ��� ȣ���ϴ� ���α׷�
void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main()
{
	//15-1
	int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("--------------------------------------------\n");
	printf("����   ������     &����      *����    **����\n");
	printf("--------------------------------------------\n");
	printf("  a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u%\n\n", ppi, &ppi, *ppi, **ppi);
	
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n\n", pa, pb);

	int sel;

	printf("01 �� ������ ��\n");
	printf("02 �� ������ ��\n");
	printf("03 �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� ������ �����ϼ��� : ");
	/*scanf("%d", &sel);

	switch (sel)
	{
	case 1:func(sum); break;
	case 2:func(mul); break;
	case 3:func(max); break;
	}*/

	// 16-3) calloc,realloc �Լ��� ����� ��� �Է�
	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);


	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

void func(int (*fp)(int, int))
{
	int a, b;
	int res;
	
	printf("�� ������ ���� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("�ᱣ���� : %d\n", res);
}

int sum(int a, int b)
{
	return(a + b);
}

int mul(int a, int b)
{
	return(a * b);
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}