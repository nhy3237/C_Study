#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void swap(int* pa, int* pb);

int main()
{
	// 8-1) 5명의 나이를 저장할 배열을 선언하고 사용하는 방법
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	//scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n\n", ary[4]);

	// 8-2,3) 배열과 반복문을 사용한 성적 처리 프로그램, sizeof 연산자
	//int score[5];
	//int i;
	//int total = 0;
	//double avg;

	//int size = sizeof(score) / sizeof(score[0]); //배열 score 나누기 score의 개별 하나 

	//for (i = 0; i < size; i++)
	//{
	//	scanf("%d", &score[i]);
	//}

	//for (i = 0; i < size; i++)
	//{
	//	total += score[i];
	//}
	//avg = total / (double)size;

	//for (i = 0; i < size; i++)
	//{
	//	printf("%5d", score[i]);
	//}
	//printf("\n");

	//printf("평균 : %.1lf\n", avg);

	// 8-4) 문자열을 저장하는 char형 배열
	/*char str[80] = "applejam";

	int i;

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n\n", str);*/

	// 8-5) 문자열을 대입하는 strcpy 함수
	/*char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n\n", str1, str2);*/

	// 8-6) 빈칸을 포함한	 문자열 입력
	/*char str[80];

	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : ");
	puts(str);*/

	// 8-7) 널 문자가 없는 문자열
	char str[5];

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n\n", str);

	// 9-1) 변수의 메모리 주소 확인
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a);
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n\n", &c);

	// 9-2) 포인터의 선언과 사용
	int a1;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("포인터로 a 값 출력 : %d\n", *pa); // : *pa == a
	printf("변수명으로 a 값 출력 : %d\n", a);
	printf("포인터로 a 주소값 출력 : %d\n", pa);
	printf("변수명으로 a 주소값 출력 : %d\n\n", &a);

	//scanf("%d", pa); // : scanf("%d", &a);

	// 9-3) 포인터를 사용한 두 정수의 합과 평균
	int a2 = 10, b2 = 15, total;
	double avg;
	int* pa1, * pb1;
	int* pt = &total;
	double* pg = &avg;

	pa1 = &a2;
	pb1 = &b2;

	*pt = *pa1 + *pb1;
	*pg = *pt / 2.0;

	pa1 = pb1;

	printf("a 주소 : %d, b 주소 : %d, pa1 주소 : %d, pb1 주소 : %d", &a, &b, pa1, pb1);

	printf("두 정수의 값 : %d, %d\n", *pa1, *pb1);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n\n", *pg);


	// 9-4) 포인터에 const 사용
	int a3 = 10, b3 = 20;
	const int* pa3 = &a3; //*pa3 자체로 값을 바꿀 순 없다. 연결된 주소의 변수 a3으로는 값을 바꿀 수 있다.

	printf("변수 a3 값 : %d\n", *pa3);
	pa3 = &b3;
	printf("변수 b3 값 : %d\n", *pa3);
	pa3 = &a3;
	a3 = 20;
	printf("변수 a3 값 : %d\n\n", *pa3);

	// 9-5) 주소와 포인터의 크기
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));

	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n\n", sizeof(*pd));

	// 9-6)허용되지 않는 포인터의 대입
	// 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 한다.
	int a4 = 10;
	int* p = &a4;
	double* pd1;

	pd1 = p; //변수형이 달라서 오류남.
	printf("%lf\n", *pd);

	// 9-7)포인터를 사용한 두 변수의 값 교환
	int aa = 10, bb = 20;

	swap(&aa, &bb);
	printf("aa:%d, b:%d\n", aa, bb);

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}