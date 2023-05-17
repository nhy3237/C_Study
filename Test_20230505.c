#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

void input_nums(int* lotto_nums, int size);
void print_nums(int* lotto_nums, int size);

int main()
{
	/*
	Q1. 광고판 문자 이동 출력을 포인터를 이용한 코드로 바꿔서 재작성 하도록 한다.*/

	//char str[80];
	//char* pS = str;
	//int size = sizeof(str) / sizeof(str[0]);
	//
	//
	//gets(str);
	//strcat(str, " ");

	//while (1)
	//{
	//	Sleep(100);
	//	system("cls");
	//	
	//	char last = *pS;

	//	for (int i = 0; i < size; i++)
	//	{
	//		pS[i] = pS[i + 1];

	//		if (pS[i] == '\0')
	//		{
	//			pS[i] = last;
	//			pS[i + 1] = '\0';
	//			break;
	//		}
	//		printf("%c", pS[i]);
	//	}
	//	//puts(str);
	//}

	/*
	Q2. 길이가 6인 int형 배열 Arr을 선언하고 각 1,2,3,4,5,6으로 초기화 한 다음에
		배열에 저장된 값의 순서가 6,5,4,3,2,1이 되도록 변경하는 프로그램을 작성하라.
		단, 배열의 맨 앞과 맨 뒤를 가리키는 포인터 변수 두 개를 선언해서 이를 활용하여
		저장된 값의 순서를 바꾼다.*/

	//int Arr[6] = { 1,2,3,4,5,6 };
	//int size = sizeof(Arr) / sizeof(Arr[0]);
	//int* pFirst = Arr;
	//int* pLast = &Arr[size - 1];
	//int temp;

	//while(*pLast - *pFirst > 1)
	//{
	//	temp = *pFirst;
	//	*pFirst = *pLast;
	//	*pLast = temp;

	//	pFirst++;
	//	pLast--;
	//}

	//printf("Arr의 변경된 값 : ");

	//for(int i = 0; i < size; i++)
	//{
	//	printf("%d ", Arr[i]);
	//}

	/*
	Q3. 임의의 문자열을 입력 받아서 뒤집어 출력하는 프로그램을 작성하라.	
		ex)	input : hello
			output : olleh */
	
	/*char str[80];
	char* pStr = str, *fStr = str, * lStr;
	char temp;
	int size = sizeof(str) / sizeof(str[0]);

	printf("input : ");
	gets(str);

	for (int i = 0; i < size; i++)
	{
		lStr = &str[i];

		if (pStr[i] == '\0')
		{
			lStr = &str[i - 1];
			pStr[i + 1] = '\0';
			break;
		}
	}

	while (lStr - fStr > 1)
	{
		temp = *fStr;
		*fStr = *lStr;
		*lStr = temp;

		fStr++;
		lStr--;
	}

	printf("output: ");

	for(int i = 0; i < size; i++)
	{
		if (pStr[i] != '\0')
		{
			printf("%c", pStr[i]);
		}
		else
		{
			printf("\n");
			break;
		}
	}*/

	/* Q4. p292 */
	/*int lotto_nums[6];
	int size = sizeof(lotto_nums) / sizeof(lotto_nums[0]);

	input_nums(lotto_nums, size);
	print_nums(lotto_nums, size);*/
	
	/* Q5. p315 실전 예제
	scanf, getchar 이용 , scanf에는 엔터키가 남아있음*/
	int res, Maxlen = 0, len = 0;
	char ch;

	while (1)
	{
		//ch = getchar();
		res = scanf("%c", &ch);

		if (ch != '\n') len++;
		else
		{
			if (len > Maxlen) Maxlen = len;
			len = 1;
			//ch = getchar();
			res = scanf("%c", &ch);
		}
		//res = ch;
		if (res == EOF) break;
	}

	printf("가장 긴 단어의 길이 : %d\n", Maxlen);
	return 0;
}


void input_nums(int* lotto_nums, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("번호 입력 : ");
		scanf("%d", &lotto_nums[i]);
		for (int j = 0; j < i; j++)
		{
			if (lotto_nums[i] == lotto_nums[j])
			{
				printf("같은 번호가 있습니다!\n");
				i--;
				// 오답노트
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums, int size)
{
	printf("로또 번호 :");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}