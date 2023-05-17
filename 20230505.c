#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void print_ary(int* pa, int size);

void input_ary(double* pa, int size);
void output_ary(double* pa, int size);
double find_max(double* pa, int size);

void my_gets(char* str, int size);


int main()
{
	int arr[5] = { 1,2,3,4,5 };

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}

	*(arr + 1) = 99; // arr[0] = 99;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);
	}
	printf("\n\n");

	// 10-1) 배열명에 정수 연산을 수행하여 배열 요소 사용
	int ary[3];

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	/*printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);*/

	for (int i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}
	printf("\n\n");

	// 10-2) 배열명처럼 사용되는 포인터
	int ary1[3];
	int* pa = ary1;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (int i = 0; i < 3; i++)
	{
		printf("%5d\n", pa[i]);
		printf("%5d\n", *(pa + i));
		printf("%5d\n", pa + i);
	}
	printf("\n\n");

	// 10-3) 포인터를 이용한 배열의 값 출력
	int ary2[3] = { 10,20,30 };
	int* pa2 = ary2;

	printf("배열의 값 : ");
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *pa);
		pa++;
	}
	printf("\n\n");

	int a = 10;
	int* pa3 = &a;

	printf("%d\n", &a);		//a의 시작 주소
	printf("%d\n", pa3);	//pa3의 시작 주소 == a의 시작 주소
	printf("%d\n", *pa3);	//*pa3 == a
	pa3 = pa3 + 1;			//pa3의 시작 주소 + 1
	printf("%d\n", pa3);	//pa3의 시작 주소 == a의 시작 주소 + 4byte
	printf("%d\n", a);		// a == 10
	printf("%d\n\n", *pa3);	//쓰레기값

	// 10-4)포인터의 뺄셈과 관계 연산
	int ary4[5] = { 10,20,30,40,50 };
	int* pa4 = ary4;		//첫 번째 배열 요소의 주소
	int* pb4 = pa4 + 3;		//네 번째 배열 요소의 주소

	printf("pb4 : %u\n", pa4);
	pa4++;					//pa4 주소를 다음 배열 요소로 이동
	printf("pb4 : %u\n", pb4);
	printf("pb4 : %u\n", pa4);
	printf("pb4 - pa4 : %u\n", pb4 - pa4);
	printf("arr4 - (arr4 + 2) : %u\n", ary4 - (ary4 + 2));

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa4 < pb4) printf("%d\n\n", *pa4);
	else printf("%d\n", *pb4);

	// 10-5, 6) 배열을 처리하는 함수
	int ary5[5] = { 10,20,30,40,50 };
	int ary6[7] = { 10,20,30,40,50,60,70 };
	int size1 = sizeof(ary5) / sizeof(ary5[0]);
	int size2 = sizeof(ary6) / sizeof(ary6[0]);

	print_ary(ary5, size1);
	printf("\n");
	print_ary(ary6, size2);
	printf("\n\n");

	// 10-7) 배열에 값을 입력하는 함수
	double ary7[5];
	double max;
	int size = sizeof(ary7) / sizeof(ary7[0]);

	//input_ary(ary7, size);
	//output_ary(ary7, size);
	//max = find_max(ary7, size);
	//printf("배열의 최댓값 : %.1lf\n\n", max);
	
	// 11-4) 버퍼를 사용하는 문자 입력
	/*char ch;

	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			scanf("%c", &ch);
			printf("%c", ch);
		}
	}*/

	// 11-6) getchar 함수를 사용한 문자열 입력
	/*char str8[7];

	my_gets(str8, sizeof(str8));
	printf("입력한 문자열 : %s\n", str8);*/

	// 11-7) 버퍼의 내용을 지워야 하는 경우
	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);


	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}

void input_ary(double* pa, int size)
{
	printf("%d개의 실수값 입력 : ", size);
	for (int i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}

void output_ary(double* pa, int size)
{
	printf("입력한 실수값 출력 : ");
	for (int i = 0; i < size; i++)
	{
		printf("%.1lf ", pa[i]);
	}
	printf("\n");
}

double find_max(double* pa, int size)
{
	double max;
	
	max = pa[0];

	for (int i = 1; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}

	return max;
}

void my_gets(char* str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}