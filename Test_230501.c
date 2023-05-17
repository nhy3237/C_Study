#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	/*
	Q1. 1이상 100미만인 정수 m과 n을 입력받아 두 수의 배수를 출력하는 프로그램을 작성하라.
		단, m의 배수이면서 n의 배수인 정수는 한 번만 출력해야 한다.(100 이하의 정수까지만 출력)
		ex) 7 9
			7 9 14 18 21 27 28 35 36 .... 63 ... 99

		i을 1부터 100까지 증가
		3과 5 입력 받음
		계속 증가하다가 나눠서 3 걸리면 출력 5걸리면 출력 3으로도 나눠지고 5로도 나눠지면 둘 중 하나만 참이면 출력

	int m, n, i;

	printf("1이상 100미만인 정수 m과 n을 입력하시오. ");
	
	scanf("%d %d", &m, &n);
	
	for (i = 1; i <= 100;i++)
	{
		if ((i % m == 0) || (i % n == 0))
		{
			printf("%d ", i);
		}
	}
	*/

	/*
	Q2. 임의의 n을 입력받아서 다음과 같은 형태로 출력하도록 하라.
		ex) n = 5인 경우
			*
			* *
			* * *
			* * * *
			* * * * *  (+ 오른쪽에서 채워지는 형태도 만들기) 
	*/
	/*
	int i, j, n;

	printf("임의의 n : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0;j < n;j++)
		{	
			printf("*");
			if (j == i) break;
		}
		
		//for(j = 0; j <= i; j++)
		//{
		//	printf("*");
		//}
		
		printf("\n");
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0;j < n;j++)
		{	
			if (j < n - i - 1)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	*/

	// p176 확인 문제 3번
	/*int i, j, n;

	printf("임의의 n : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0;j < n;j++)
		{
			if ((j == i)||(j== n-i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}*/

	/*
	Q3. 임의의 수 n을 입력을 받아 다음과 같은 형태가 되도록 프로그래믈 작성하라.
		ex) n = 5
		*       *
		* *   * *
		* * * * *
		* *   * *
		*       *
	*/
	/*
	int i, j, n;

	printf("임의의 n : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{	
			if(i <= n / 2)
			{
				if ((j <= i) || (j >= n - i - 1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			else //if(i > n / 2)
			{
				if ((j < n - i) || (j > i - 1))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	*/

	/*
	Q4. 다음과 같이 형태가 되도록 구구단을 출력하라.
		원하느 단 n을 입력받아 n단까지 출력한다.
		자릿수 맞춰서 출력

		ex) n = 6 (2단부터 18단)

						구 구 단
		----------------------------------
		2 x 1 = 2	3 x 1 = 3	4 x 1 = 4
		2 x 2 = 4
		....
		2 x 9 = 18	3 x 9 = 27	4 x 9 = 36
		-----------------------------------
		5 x 1 = 5	6 x 1 = 6
		...
		-----------------------------------
		3단씩 옆으로*/
	
	int i, j,k, n;

	int num;

	printf("2부터 18까지의 n을 입력하세요. ");
	scanf("%d", &n);

	if ((n >= 2) && (n <= 18))
	{
		printf("\n%25s\n", "구 구 단");
		printf("---------------------------------------------\n");

		/*for (i = 2; i <= n; i += 3)
		{
			for (j = 1;j <= 9;j++)
			{
				for (k = 0; k <= 2;k++)
				{
					printf("%d x %d = %d\t", i + k, j, (i + k) *j);

					if (i + k == n)break;
				}
				printf("\n");
			}
			printf("---------------------------------------------\n");
		}*/

		// 오답노트
		int a = 2;

		while (a <= n)
		{
			for (i = 1; i <= 9; i++)
			{
				for (j = a; (j <= a + 2) && (j <= n); j++)
				{
					printf("%d x %d = %d\t", j, i, i * j);
				}
				printf("\n");
			}
			printf("---------------------------------------------\n");

			a = a + 3;
		}
	}
	else
	{
		printf("2부터 18까지의 수가 아닙니다.");
	}

	return 0;
}