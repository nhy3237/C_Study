#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	/*
	Q1. ������ ���� A����� B��İ� ���� ���°� �ǵ��� ���α׷��� �ۼ��϶�.
		A ���				B���
		1 2 3 4				5 1
		5 6 7 8				6 2
							7 3
							8 4		*/

	//int A[10][10];
	//int row, col, num;
	//int i, j;

	//printf("A�� ��� �� : ");
	//scanf("%d %d", &row, &col);

	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		A[i][j] = (i * col) + j + 1;
	//	}
	//}
	//
	//printf("\nA ���\t\tB ���\n");
	//printf("----------------------\n");

	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++) //A���
	//	{
	//		printf("%d ", A[i][j]);
	//	}
	//	printf("\t");
	//	for (int j = row -1; j >= 0; j--) //B���
	//	{
	//		printf("%d ", A[j][i]);
	//	}
	//	printf("\n");
	//}

	////���� B��� ���
	//if (i < col) 
	//{
	//	for (i; i < col; i++)
	//	{
	//		printf("\t\t");
	//		for (int j = row - 1; j >= 0; j--)
	//		{
	//			printf("%d ", A[j][i]);
	//		}
	//		printf("\n");
	//	}
	//}

	/*
	Q2. �迭�� ���ڰ� ������ ���� ������� ä�������� ���α׷��� �ۼ��϶�.
		�ð�������� M x M �� 2���� �迭�� ���ڰ� ä�������� �Ѵ�.
		ex > M = 3
			1 2 3
			8 9 4
			7 6 5
	*/

	//int M;
	//int A[10][10];
	//int i, j;
	//int num = 0, n = 0;

	//printf("M = ");
	//scanf("%d", &M);
	//printf("\n");

	//int row = 0;
	//int col = M - 1;

	////0��
	//for (i = 0; i < M; i++)
	//{
	//	printf("%2d\t", A[row][i] = ++num);
	//}
	//printf("\n");

	//int fix = col; //���� ��
	//int cal = 1; //1�� �� ++, 0�� �� --

	//while (1)
	//{
	//	n++;

	//	for (i = 0; i < 2; i++) //2���� ����.
	//	{
	//		if (i == 0)
	//		{
	//			for (j = 0; j < M - n; j++) //M-n����
	//			{
	//				if (cal == 1) row++;
	//				else row--;

	//				A[row][fix] = ++num;
	//			}
	//			fix = row;
	//		}
	//		else
	//		{
	//			if (cal == 1) cal = 0;
	//			else cal = 1;

	//			for (j = 0; j < M - n; j++) //M-n����
	//			{
	//				if (cal == 1) col++;
	//				else col--;

	//				A[fix][col] = ++num;
	//			}
	//			fix = col;
	//		}
	//	}
	//	if (M - n == 1) break;
	//}

	//for (i = 1; i < M; i++)
	//{
	//	for (j = 0; j < M; j++)
	//	{
	//		printf("%2d\t", A[i][j]);
	//	}
	//	printf("\n");
	//}
	
	/* Q3. p.413 ���� ���� ���� */
	/*int ary[5][6] = { {1,2,3,4,5},
					  {6,7,8,9,10},
					  {11,12,13,14,15},
					  {16,17,18,19,20} };
	int i, j;

	for (i = 0; i < 4; i++)
	{
		ary[i][5] = 0;
		for (j = 0; j < 5; j++)
		{
			ary[i][5] += ary[i][j];
		}
		ary[4][5] += ary[i][5];
	}

	for (i = 0; i < 5; i++)
	{
		ary[4][i] = 0;
		for (j = 0; j < 4; j++)
		{
			ary[4][i] += ary[j][i];
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%d\t", ary[i][j]);
		}
		printf("\n\n");
	}*/

	/*
	Q4. ������ ���� �迭�� ���ڰ� ä�������� ���α׷��� �ۼ��϶�. (N x N�� ���θ� �ۼ�) 
		ex > N = 3
			1 2 6
			3 5 7
			4 8 9	*/
	
	int N;
	int A[10][10];
	int row = 0, col = 0;
	int i, j;
	int num = 0;
	int count = 0; //�밢�� ��� Ƚ��

	printf("N = ");
	scanf("%d", &N);
	printf("\n");

	for (i = 0; i < N * 2 - 1; i++)
	{	
		for (j = 0; j <= count; j++)
		{
			A[row][col] = ++num;
			
			if (j == count) break;

			if (count % 2 == 1)
			{
				row++;
				col--;
			}
			else
			{
				row--;
				col++;
			}
		}

		if (num == N * N) break;

		if (i >= N - 1) //�߰� �밢���� ������ �پ������ 
		{
			count--;
			if (row > col)
			{
				col++;
			}
			else if (row < col)
			{
				row++;
			}
		}
		else
		{
			count++;
			if (row > col)
			{
				row++;
			}
			else if (row <= col)
			{
				col++;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%2d\t", A[i][j]);
		}
		printf("\n");
	}

	return 0;
}