#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	/*
	Q1. ����ڷκ��� ���� 3���� �Է¹޾� �� a,b,c�� ������ �ϰ�
	���ǿ����ڸ� �̿��Ͽ� �� ������ �߿� ���� ū ���� ���� ����ϴ�
	���α׷��� �ۼ��϶�.

	//������ Ǯ��
	int a, b, c;

	printf("���� 3�� : ");
	scanf("%d %d %d", &a, &b, &c);
	printf("���� ū ����? %d\n", (a>b)&&(a>c) ? a : (b>a) && (b>c) ? b : c);

	//�����Ʈ
	int a, b, c, res;
	
	printf("���� 3�� : ");
	scanf("%d %d %d", &a, &b, &c);

	res = (a > b) ? a : b;
	printf("���� ū ����? %d\n", (res > c) ? res : c);
	*/
	

	/*
	Q2. �� ���� ������ �Է¹޾� �� ���� ���� ����ϴ� ���α׷��� �ۼ��϶�.
	��, ������ ū ������ ���� ���� ���� �Ѵ�.
	ex > 12 5	-> 7
	     4  16	-> 12 
	case1. if~else���� �̿��ؼ� �ۼ�
	case2. ���ǿ����ڸ� �̿��ؼ� �ۼ� 

	int a, b, res;

	printf("���� 2�� : ");
	scanf("%d %d", &a, &b);

	//case1
	if (a > b)
	{
		res = a - b;
	}
	else
	{
		res = b - a;
	}

	//case2
	res = (a > b) ? a - b : b - a;

	printf("�� ���� �� : %d\n", res);
	*/

	/*
	Q3. �л��� ��ü ��� ������ ���� ������ ����ϴ� ���α׷��� �ۼ�.
		������ 90�� �̻� A, ������ 80�� �̻� B,
		������ 70�� �̻� C, ������ 60�� �̻� D,
		�� �̸��� F�� ó���Ѵ�.
		
		���α׷� ����� ����, ����, ������ ������ �Է¹޴´�.
		�� ����� ���ϰ�, �� �򰡱����� �����Ͽ� ������ ������ ����Ѵ�.

	int kor, eng, mat, avg; //����, ����, ����, ���
	char credit; //����

	printf("����, ����, ������ ������? ");
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = (kor + eng + mat) / 3;

	if (avg >= 80)
	{
		if (avg < 90)
		{
			credit = 'B';
		}
		else
		{
			credit = 'A';
		}
	}
	else if (avg >= 60)
	{
		if (avg < 70)
		{
			credit = 'D';
		}
		else
		{
			credit = 'C';
		}
	}
	else
	{
		credit = 'F';
	}

	printf("���� : %c\n", credit);
	*/

	/*
	Q4. Factorial ���, � ���� ���� n�� �Է� �޾Ƽ�
		n! ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		**���� n�� �Է� ������ 1���� n������ ��
	
	int n, i, res;

	printf("���� n�� ����? ");
	scanf("%d", &n);

	res = 1;

	for (i = 1; i <= n ; i++)
	{
		res *= i;
	}

	printf("n!�� �� : %d\n", res);
	*/

	/*
	Q5. �� ���� �Է� �޾� �� �� ���̿� �����ϴ� ������ ����
		���ϴ� ���α׷� �ۼ�
		ex) 3 5 or 5 3
			3 + 4 + 5 => 12 
	
	int a, b, i, min, max, res = 0;

	printf("���� a, b�� ����? ");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	for (i = min;i <= max;i++)
	{
		res += i;
	}

	printf("�� �� ���̿� �����ϴ� ������ �� : %d\n", res);
	*/

	/*
	Q6. ����ڷκ��� ���� ���� M�� N�� �Է¹޾�
		N�� ��ŭ M�� ����� ����ϴ� ���α׷��� �ۼ��϶�.
		ex) 3 4 
		 => 3 6 9 12
	*/
	
	/*int M, N, i, res;

	printf("���� M�� ����? ");
	scanf("%d", &M);
	printf("M�� ����� �� �� ����Ͻðڽ��ϱ�? ");
	scanf("%d", &N);

	printf("%d�� ��ŭ�� %d�� ��� : ", N, M);

	for (i = 1; i <= N; i++)
	{
		res = i * M;
		printf("%d ", res);
	}
	*/
	/* �����Ʈ
	int N, M;

	printf("���� ���� N, M : ");
	scanf("%d %d", &N, &M);

	printf("%d�� ��ŭ�� %d�� ��� : ", N, M);

	for (int i = 1; i <= N; i++)
	{
		printf("%d ", M * i);
	}
	*/

	/*
	Q7. ����ڷκ��� ��� ������ �Է� �޾� �� ���� �� �� ������ ���α׷��� �ۼ��϶�.
		��, ����ڰ� 0�� �Է��� ������ ��� �Ǿ�� �ϸ� 0�� �ԷµǸ�
		�Էµ� ��� ������ ���� ����Ѵ�.
		** do~while�� ���
	*/
	
	int a, sum = 0; //����ڰ� �Է��ϴ� ����, ��

	printf("���� ���� �������� �Է��Ͻÿ�.(0 �Է� ��, �Էµ� ��� ������ ���� ��µ�)\n");

	do
	{
		scanf("%d", &a);
		sum += a;
	} while (a != 0);

	printf("�Էµ� ��� ������ �� : %d\n", sum);

	return 0;
}