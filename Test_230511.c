#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void MaxAndMin(int* pA, int** ppMax, int** ppMin);
void swap(char form, void* vpA, void* vpH);

int main()
{
	/*
	Q1. 야구게임
		세 개의 숫자를 입력 받아서 다음과 같이 숫자가 있지만
		그 위치가 틀렸을 때는 "ball"을 출력하고,
		숫자와 위치가 맞으면 "strike"를 출력한다.
		숫자와 위치가 전부 틀리면 "out"을 출력하는 프로그램을 작성하라.
		무엇이 볼이고 스트라이크 인지는 출력하지 않는다.
		세 개의 숫자와 위치가 다 맞으면 "homerun"으로 표시하고 게임을 끝낸다.
		ex) 컴퓨터 2 1 6 <- 보여지면 안 됨.
			사용자1 8 3 5 => OUT
			사용자2 6 5 9 => 0S 1B
			사용자3 2 6 4 => 1S 1B
			사용자4 2 1 6 => HR			반복문, 주어진 숫자 범위 내에서 임의의 숫자로 나오는 거 rand() 정수형
		1부터 9사이의 값으로 조합되며 중복 되어서는 안 된다.*/
	// 랜덤수 하나 만들고 저장 다음 거 만들 때 같은지 세번째까지/ 배열하는 거
	//int random[3], userNum[3];
	//int strike = 0, ball = 0;

	//// 중복 없는 세 개의 랜덤 수 만들기
	//random[0] = (rand() % 9) + 1;
	//random[1] = (rand() % 9) + 1;
	//while (random[0] == random[1])
	//{
	//	random[1] = (rand() % 9) + 1;
	//}
	//random[2] = (rand() % 9) + 1;
	//while (random[0] == random[2] || random[1] == random[2])
	//{
	//	random[2] = (rand() % 9) + 1;
	//}

	//while (1)
	//{
	//	printf("세 개의 숫자 입력 : ");
	//	scanf("%d %d %d", &userNum[0], &userNum[1], &userNum[2]);
	//	while (userNum[0] == userNum[1] || userNum[0] == userNum[2] || userNum[1] == userNum[2])
	//	{
	//		printf("중복된 숫자가 있습니다. 다시 입력해주세요.\n\n");
	//		printf("세 개의 숫자 입력 : ");
	//		scanf("%d %d %d", &userNum[0], &userNum[1], &userNum[2]);
	//	}

	//	strike = 0;
	//	ball = 0;

	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 3; j++)
	//		{
	//			if (random[i] == userNum[j])
	//			{
	//				if (i == j) //위치가 같으면
	//				{
	//					strike++;
	//				}
	//				else  //위치 다르고 숫자만 같으면
	//				{
	//					ball++;
	//				}
	//			}
	//		}
	//	}

	//	if (strike == 0 && ball == 0)
	//	{
	//		printf("%s\n\n", "OUT");
	//	}
	//	else if (strike == 3)
	//	{
	//		printf("%s\n\n", "HR");
	//		break;
	//	}
	//	else
	//	{
	//		printf("=> %dS %dB\n\n", strike, ball);
	//	}
	//}

	/*
	Q2. 다음과 같이 두개의 int형 포인터 변수와 길이가 5인 int 형 배열을 선언한다.
		int *maxPtr;
		int *minPtr;
		int arr[5];
	MaxAndMin 이란 함수를 정의하고 이를 호출하여 위 배열과 두 포인터를 변수로 전달한다. 리턴 값은 없다.
	이 함수의 호출이 완료되면, 포인터 변수 maxPtr에는 가장 큰 값이 minPtr에는 가장 작은 배열 요소의 주소값이
	저장되어야 한다.
	결과 >
		arr 주소값과, 최대, 최소의 주소 값
		maxPtr, minPtr이 가진 주소에 저장된 값을 출력하라. */

	/*int* maxPtr;
	int* minPtr;
	int arr[5];

	printf("5개의 정수 : ");

	for (int i = 0; i < 5; i++)
	{	
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, &maxPtr, &minPtr);

	printf("arr의 주소 값 : %u\n", arr);
	printf("최대 주소 값 : %u\n", maxPtr);
	printf("최소 주소 값 : %u\n", minPtr);
	printf("maxPtr 주소에 저장된 값 : %d\n", *maxPtr);
	printf("minPtr 주소에 저장된 값 : %d\n", *minPtr);*/

	/* Q3. p.448 도전 실전 예제 */
	
	/*int age1, age2;
	double height1, height2;
	
	printf("첫 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age1, &height1);
	printf("두 번째 사람의 나이와 키 입력 : ");
	scanf("%d %lf", &age2, &height2);

	swap("int", &age1, &age2);
	swap("double", &height1, &height2);

	printf("첫 번째 사람의 나이와 키 : %d, %.1f\n", age1, height1);
	printf("두 번째 사람의 나이와 키 : %d, %.1f\n ", age2, height2);
	*/

	/* Q4. 사용자로부터 문자열을 입력 받아서 단어를 역으로 출력하는 프로그램을 작성하라.
			("Quit"가 입력될 때 까지 반복 되도록 한다.)
			입력 > I am happy
			출력 > happy am I		(메모리 할당, 내용 복사 연습) */
	
	char* pStr;	// 동적 할당 영역을 연결한 포인터 선언
	int count = 0;
	int i;

	printf("입력 > ");

	pStr = (char*)malloc(sizeof(char));	// 메모리 동적 할당 후 포인터 연결

	if (pStr == NULL)
	{
		printf("# 메모리가 부족합니다.\n");
		exit(1);
	}

	while (1)
	{

		if (pStr[i] == "Quit") break;
	}

	free(pStr);	// 동적 할당 영역 반환

	return 0;
}

void swap(char *form, void* vpA, void* vpH)
{
	if (form == "int")
	{	
		int temp;
		temp = *(int*)vpA;
		*(int*)vpA = *(int*)vpH;
		*(int*)vpH = temp;
	}
	else if (form == "double")
	{
		double temp;
		temp = *(double*)vpA;
		*(double*)vpA = *(double*)vpH;
		*(double*)vpH = temp;
	}
}

void MaxAndMin(int* pA, int** ppMax, int** ppMin)
{
	*ppMax = pA;
	*ppMin = pA;

	for (int i = 0; i < 5; i++)
	{
		if (**ppMin > pA[i])
		{
			*ppMin = &pA[i];
		}
		else if (**ppMax < pA[i])
		{
			*ppMax = &pA[i];
		}
	}
}