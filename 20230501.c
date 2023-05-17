#include <stdio.h>

int main()
{
	//6-4) 중첩 반복문을 사용한 별 출력

	for (int i = 0;i < 3;i++)
	{
		for (int j = 0; j < 5;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	//구구단
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}

		printf("\n");
	}

	//6-5) break를 사용한 반복문 종료
	int i, sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n\n", i);
	
	//+) continue : 반복문으로 건너뛰어 넘어감


	return 0;
}