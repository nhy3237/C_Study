#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	/* Q1. p.177 ���� ���� ���� */

	int i, j, n;
	int a = 0;

	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 2; i <= n; i++)
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
	
	/*
	Q2. ���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��϶�. n�� 10�̸�
		n�� �Է��Ͻÿ�.
		  A Z        6 3
		+ Z A		 3 6	
		------     ------
		  N N        9 9

		ex) A = 0, Z = 9
				1	   8
			  = 2,	 = 7
				9      0	
	*/
	/*int i, j, n;

	printf("n�� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		j = n - i;
		printf("A = %d, Z = %d\n", i, j);
	}*/

	return 0;
}

