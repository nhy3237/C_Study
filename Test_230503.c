#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main()
{
	/* Q1. p.177 도전 실전 예제 */

	int i, j, n;
	int a = 0;

	printf("2 이상의 정수를 입력하세요 : ");
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
	Q2. 다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성하라. n은 10미만
		n을 입력하시오.
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

	printf("n을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 0; i <= n; i++)
	{
		j = n - i;
		printf("A = %d, Z = %d\n", i, j);
	}*/

	return 0;
}

