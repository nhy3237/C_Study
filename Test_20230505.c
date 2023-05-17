#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

void input_nums(int* lotto_nums, int size);
void print_nums(int* lotto_nums, int size);

int main()
{
	/*
	Q1. ������ ���� �̵� ����� �����͸� �̿��� �ڵ�� �ٲ㼭 ���ۼ� �ϵ��� �Ѵ�.*/

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
	Q2. ���̰� 6�� int�� �迭 Arr�� �����ϰ� �� 1,2,3,4,5,6���� �ʱ�ȭ �� ������
		�迭�� ����� ���� ������ 6,5,4,3,2,1�� �ǵ��� �����ϴ� ���α׷��� �ۼ��϶�.
		��, �迭�� �� �հ� �� �ڸ� ����Ű�� ������ ���� �� ���� �����ؼ� �̸� Ȱ���Ͽ�
		����� ���� ������ �ٲ۴�.*/

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

	//printf("Arr�� ����� �� : ");

	//for(int i = 0; i < size; i++)
	//{
	//	printf("%d ", Arr[i]);
	//}

	/*
	Q3. ������ ���ڿ��� �Է� �޾Ƽ� ������ ����ϴ� ���α׷��� �ۼ��϶�.	
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
	
	/* Q5. p315 ���� ����
	scanf, getchar �̿� , scanf���� ����Ű�� ��������*/
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

	printf("���� �� �ܾ��� ���� : %d\n", Maxlen);
	return 0;
}


void input_nums(int* lotto_nums, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("��ȣ �Է� : ");
		scanf("%d", &lotto_nums[i]);
		for (int j = 0; j < i; j++)
		{
			if (lotto_nums[i] == lotto_nums[j])
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				i--;
				// �����Ʈ
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums, int size)
{
	printf("�ζ� ��ȣ :");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", lotto_nums[i]);
	}
}