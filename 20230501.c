#include <stdio.h>

int main()
{
	//6-4) ��ø �ݺ����� ����� �� ���

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0; j < 5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//������
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}

	//6-5) break�� ����� �ݺ��� ����
	int i, sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("������ �� : %d\n", sum);
	printf("���������� ���� �� : %d\n\n", i);
	
	//+) continue : �ݺ������� �ǳʶپ� �Ѿ


	return 0;
}