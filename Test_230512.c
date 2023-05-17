#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Nstudent = 0; //학생 수

struct student
{
	int num; //학번
	char name[20]; //이름
	int kor; //국어 학점
	int mat; //수학 학점
	int eng; //영어 학점
	int rank;
	double avg; //학점 평균

	struct student* next;
};

void Input_arr(struct student* ps);
void Output_arr(struct student* ps);
void Search();

int main()
{
	/* Q1. p474 소수 계산 프로그램 / 반복 실행 가능 하도록 */
	/*int N;
	int* arrN;
	int i, j = 0, count = 0;

	while (1)
	{
		printf("> 양수 입력 : ");
		scanf("%d", &N);
		if (N == 0) break;

		arrN = (int*)malloc(sizeof(int) * N);
		if (arrN == NULL)
		{
			printf("메모리가 부족합니다.\n");
			exit(1);
		}

		count = 0;

		for (i = 2; i < N; i++)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					arrN[i] = 0;
					break;
				}
			}

			if (i == j)
			{
				arrN[i] = i;
			}
		}
		
		for (i = 2; i < N; i++)
		{
			if (arrN[i] != 0)
			{
				printf("%5d", i);
			}
			else
			{
				printf("%5c", 'X');
			}

			count++;

			if (count == 5)
			{
				printf("\n");
				count = 0;
			}
		}
		free(arrN);
		printf("\n\n");
	}*/

	//createConsolescreenbuffer
	//GetAsynckeyState
	//SetConsoleTextAttribute

	/* Q2. p.512 성적 처리 프로그램.
			학번, 이름, 학점(국/영/수)을 입력 받을 수 있는 구조체를 만들고
			임의 수의 학생에 대한 데이터를 입력 받아 출력하는 프로그램을 작성하라.
			다음 4개의 메뉴를 구성하고, 각 메뉴 선택시 작동은 다음과 같다.
			1. 입력 - 학번, 이름, 성적 순으로 입력
			2. 출력 - 성적(평균)에 따라 (정렬된 형태로) 출력
			3. 검색 - 이름으로 해당 학생의 학점, 성적을 출력
			4. 종료
			단, 1) 번호 중복 불가, 이름은 중복 가능
				2) 검색 -> 이름 검색으로 하고 먼저 찾은 것을 우선으로 출력
				3) 메모리 할당 사용, 자기 참조 구조체 활용
					입력/ 출력/ 검색은 각각 개별 함수로 구현한다.
			*/

	int Menu;

	struct student list;
	struct student* ps = &list;

	while (1)
	{
		printf("\n<성적 처리 프로그램>\n\n* 메뉴를 선택하세요.\n 1. 학생 추가\n 2. 학생 성적 보기\n 3. 검색\n 4. 종료\n >> ");
		scanf("%d", &Menu);
	
		switch (Menu)
		{
		case 1: Input_arr(ps); break; // 입력 함수
		case 2: Output_arr(ps); break; // 출력 함수
		case 3: Search(); break; // 검색 함수00
		case 4: exit(1);
		}
	}
	return 0;
}

void Input_arr(struct student* ps)
{
	int N;

	printf("\n* 학생추가\n** 학생 수를 입력하세요 : ");
	scanf("%d", &N);

	printf("** 학번, 이름, 국어 점수, 수학 점수, 영어 점수를 차례로 입력하세요.\n");
	for (int i = Nstudent; i < N + Nstudent; i++)
	{
		printf("%d >> ", i + 1);
		scanf("%d %s %d %d %d", &(ps + i)->num, &(ps + i)->name,
								&(ps + i)->kor, &(ps + i)->mat, &(ps + i)->eng);
		(ps + i)->rank = 0;

		for (int j = 0; j < i; j++)
		{
			while ((ps + i)->num == (ps + j)->num)
			{
				printf("\n학번이 중복되었습니다. 다시 입력해주세요.\n%d >> ", i + 1);
				scanf("%d %s %d %d %d", &(ps + i)->num, &(ps + i)->name,
					&(ps + i)->kor, &(ps + i)->mat, &(ps + i)->eng);

				if ((ps + i)->num != (ps + j)->num) break;
			}
		}
	}
	Nstudent += N;
}

void Output_arr(struct student* ps)
{
	int cnt = 0;
	//double* avg;
	struct student temp;

	for (int i = 0; i < Nstudent; i++)
	{
		//avg = (double*)malloc(sizeof(double));
		(ps + i)->avg = (((ps + i)->kor + (ps + i)->mat + (ps + i)->eng) / 3);
	}

	for (int i = 0; i < Nstudent; i++)
	{
		for (int j = 0; j < Nstudent; j++)
		{
			if (i != j)
			{
				if ((ps + i)->avg > (ps + j)->avg) cnt++;
			}
		}
		(ps + i)->rank = Nstudent - cnt;
	}
	
	for (int i = 0; i < Nstudent; i++)
	{
		for (int j = i + 1; j < Nstudent; j++)
		{
			if ((ps + i)->rank < (ps + j)->rank)
			{
				temp = *(ps + i);
				*(ps + i) = *(ps + j);
				*(ps + j) = temp;
			}
		}
	}

	printf("\n* 학생 성적 보기\n**%s | %s | %3s | %3s | %3s | %4s\n", "학번", "이름", "국어", "수학", "영어", "평균");
	printf("------------------------------------------\n");
	for (int i = 0; i < Nstudent; i++)
	{
		printf("%8d | %5s | %3d | %3d | %3d | %4.1lf\n", (ps + i)->num, (ps + i)->name,
			(ps + i)->kor, (ps + i)->mat, (ps + i)->eng, (ps + i)->avg);
	}
	//free(avg);
}

void Search()
{

}

0