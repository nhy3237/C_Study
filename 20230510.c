#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// 14-1) 학생 3명의 네 과목 총점과 평균을 구하는 프로그램
	/*int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}*/

	// 14-3) 여러 개의 동물 이름을 입출력하는 프로그램
	/*char animal[5][20];
	int i, count;

	count = sizeof(animal) / sizeof(animal[0]);

	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s", animal[i]);
	}*/

	// 14-5) 2개 반 3명 학생의 4과목 점수를 저장하는 3차원 배열
	/*int score[2][3][4] = {
		{{72,80,95,60},{68,98,83,90},{75,72,84,90}},
		{{66,85,90,88},{95,92,88,95},{43,72,56,75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d반 점수...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}*/

	// 14-6) 포인터 배열로 여러 개의 문자열 출력
	/*char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}*/

	// 14-7) 여러 개의 1차원 배열을 2차원 배열처럼 사용
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int* pary[3] = { ary1,ary2,ary3 };
	int i, j;

	printf("pary[1] 주소 : %d\n", pary[0]);
	printf("pary[2] 주소 : %d\n", pary[1]);
	printf("pary[3] 주소 : %d\n", pary[2]);

	printf("ary1 주소 : %d\n", ary1);
	printf("ary2 주소 : %d\n", ary2);
	printf("ary3 주소 : %d\n", ary3);

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}