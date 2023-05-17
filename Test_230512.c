#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Nstudent = 0; //�л� ��

struct student
{
	int num; //�й�
	char name[20]; //�̸�
	int kor; //���� ����
	int mat; //���� ����
	int eng; //���� ����
	int rank;
	double avg; //���� ���

	struct student* next;
};

void Input_arr(struct student* ps);
void Output_arr(struct student* ps);
void Search();

int main()
{
	/* Q1. p474 �Ҽ� ��� ���α׷� / �ݺ� ���� ���� �ϵ��� */
	/*int N;
	int* arrN;
	int i, j = 0, count = 0;

	while (1)
	{
		printf("> ��� �Է� : ");
		scanf("%d", &N);
		if (N == 0) break;

		arrN = (int*)malloc(sizeof(int) * N);
		if (arrN == NULL)
		{
			printf("�޸𸮰� �����մϴ�.\n");
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

	/* Q2. p.512 ���� ó�� ���α׷�.
			�й�, �̸�, ����(��/��/��)�� �Է� ���� �� �ִ� ����ü�� �����
			���� ���� �л��� ���� �����͸� �Է� �޾� ����ϴ� ���α׷��� �ۼ��϶�.
			���� 4���� �޴��� �����ϰ�, �� �޴� ���ý� �۵��� ������ ����.
			1. �Է� - �й�, �̸�, ���� ������ �Է�
			2. ��� - ����(���)�� ���� (���ĵ� ���·�) ���
			3. �˻� - �̸����� �ش� �л��� ����, ������ ���
			4. ����
			��, 1) ��ȣ �ߺ� �Ұ�, �̸��� �ߺ� ����
				2) �˻� -> �̸� �˻����� �ϰ� ���� ã�� ���� �켱���� ���
				3) �޸� �Ҵ� ���, �ڱ� ���� ����ü Ȱ��
					�Է�/ ���/ �˻��� ���� ���� �Լ��� �����Ѵ�.
			*/

	int Menu;

	struct student list;
	struct student* ps = &list;

	while (1)
	{
		printf("\n<���� ó�� ���α׷�>\n\n* �޴��� �����ϼ���.\n 1. �л� �߰�\n 2. �л� ���� ����\n 3. �˻�\n 4. ����\n >> ");
		scanf("%d", &Menu);
	
		switch (Menu)
		{
		case 1: Input_arr(ps); break; // �Է� �Լ�
		case 2: Output_arr(ps); break; // ��� �Լ�
		case 3: Search(); break; // �˻� �Լ�00
		case 4: exit(1);
		}
	}
	return 0;
}

void Input_arr(struct student* ps)
{
	int N;

	printf("\n* �л��߰�\n** �л� ���� �Է��ϼ��� : ");
	scanf("%d", &N);

	printf("** �й�, �̸�, ���� ����, ���� ����, ���� ������ ���ʷ� �Է��ϼ���.\n");
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
				printf("\n�й��� �ߺ��Ǿ����ϴ�. �ٽ� �Է����ּ���.\n%d >> ", i + 1);
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

	printf("\n* �л� ���� ����\n**%s | %s | %3s | %3s | %3s | %4s\n", "�й�", "�̸�", "����", "����", "����", "���");
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