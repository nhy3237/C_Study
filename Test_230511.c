#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void MaxAndMin(int* pA, int** ppMax, int** ppMin);
void swap(char form, void* vpA, void* vpH);

int main()
{
	/*
	Q1. �߱�����
		�� ���� ���ڸ� �Է� �޾Ƽ� ������ ���� ���ڰ� ������
		�� ��ġ�� Ʋ���� ���� "ball"�� ����ϰ�,
		���ڿ� ��ġ�� ������ "strike"�� ����Ѵ�.
		���ڿ� ��ġ�� ���� Ʋ���� "out"�� ����ϴ� ���α׷��� �ۼ��϶�.
		������ ���̰� ��Ʈ����ũ ������ ������� �ʴ´�.
		�� ���� ���ڿ� ��ġ�� �� ������ "homerun"���� ǥ���ϰ� ������ ������.
		ex) ��ǻ�� 2 1 6 <- �������� �� ��.
			�����1 8 3 5 => OUT
			�����2 6 5 9 => 0S 1B
			�����3 2 6 4 => 1S 1B
			�����4 2 1 6 => HR			�ݺ���, �־��� ���� ���� ������ ������ ���ڷ� ������ �� rand() ������
		1���� 9������ ������ ���յǸ� �ߺ� �Ǿ�� �� �ȴ�.*/
	// ������ �ϳ� ����� ���� ���� �� ���� �� ������ ����°����/ �迭�ϴ� ��
	//int random[3], userNum[3];
	//int strike = 0, ball = 0;

	//// �ߺ� ���� �� ���� ���� �� �����
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
	//	printf("�� ���� ���� �Է� : ");
	//	scanf("%d %d %d", &userNum[0], &userNum[1], &userNum[2]);
	//	while (userNum[0] == userNum[1] || userNum[0] == userNum[2] || userNum[1] == userNum[2])
	//	{
	//		printf("�ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է����ּ���.\n\n");
	//		printf("�� ���� ���� �Է� : ");
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
	//				if (i == j) //��ġ�� ������
	//				{
	//					strike++;
	//				}
	//				else  //��ġ �ٸ��� ���ڸ� ������
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
	Q2. ������ ���� �ΰ��� int�� ������ ������ ���̰� 5�� int �� �迭�� �����Ѵ�.
		int *maxPtr;
		int *minPtr;
		int arr[5];
	MaxAndMin �̶� �Լ��� �����ϰ� �̸� ȣ���Ͽ� �� �迭�� �� �����͸� ������ �����Ѵ�. ���� ���� ����.
	�� �Լ��� ȣ���� �Ϸ�Ǹ�, ������ ���� maxPtr���� ���� ū ���� minPtr���� ���� ���� �迭 ����� �ּҰ���
	����Ǿ�� �Ѵ�.
	��� >
		arr �ּҰ���, �ִ�, �ּ��� �ּ� ��
		maxPtr, minPtr�� ���� �ּҿ� ����� ���� ����϶�. */

	/*int* maxPtr;
	int* minPtr;
	int arr[5];

	printf("5���� ���� : ");

	for (int i = 0; i < 5; i++)
	{	
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, &maxPtr, &minPtr);

	printf("arr�� �ּ� �� : %u\n", arr);
	printf("�ִ� �ּ� �� : %u\n", maxPtr);
	printf("�ּ� �ּ� �� : %u\n", minPtr);
	printf("maxPtr �ּҿ� ����� �� : %d\n", *maxPtr);
	printf("minPtr �ּҿ� ����� �� : %d\n", *minPtr);*/

	/* Q3. p.448 ���� ���� ���� */
	
	/*int age1, age2;
	double height1, height2;
	
	printf("ù ��° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &age1, &height1);
	printf("�� ��° ����� ���̿� Ű �Է� : ");
	scanf("%d %lf", &age2, &height2);

	swap("int", &age1, &age2);
	swap("double", &height1, &height2);

	printf("ù ��° ����� ���̿� Ű : %d, %.1f\n", age1, height1);
	printf("�� ��° ����� ���̿� Ű : %d, %.1f\n ", age2, height2);
	*/

	/* Q4. ����ڷκ��� ���ڿ��� �Է� �޾Ƽ� �ܾ ������ ����ϴ� ���α׷��� �ۼ��϶�.
			("Quit"�� �Էµ� �� ���� �ݺ� �ǵ��� �Ѵ�.)
			�Է� > I am happy
			��� > happy am I		(�޸� �Ҵ�, ���� ���� ����) */
	
	char* pStr;	// ���� �Ҵ� ������ ������ ������ ����
	int count = 0;
	int i;

	printf("�Է� > ");

	pStr = (char*)malloc(sizeof(char));	// �޸� ���� �Ҵ� �� ������ ����

	if (pStr == NULL)
	{
		printf("# �޸𸮰� �����մϴ�.\n");
		exit(1);
	}

	while (1)
	{

		if (pStr[i] == "Quit") break;
	}

	free(pStr);	// ���� �Ҵ� ���� ��ȯ

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