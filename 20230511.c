#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 15-2) 이중 포인터를 사용한 포인터 교환
void swap_ptr(char** ppa, char** ppb);

// 15-8) 함수 포인터로 원하는 함수를 호출하는 프로그램
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
	printf("변수   변숫값     &연산      *연산    **연산\n");
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

	printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값 계산\n");
	printf("원하는 연산을 선택하세요 : ");
	/*scanf("%d", &sel);

	switch (sel)
	{
	case 1:func(sum); break;
	case 2:func(mul); break;
	case 3:func(max); break;
	}*/

	// 16-3) calloc,realloc 함수를 사용한 양수 입력
	int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 => ");
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
	
	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결괏값은 : %d\n", res);
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