#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	/* Q1. p544 ���� ���� ���� */
	//FILE* rfp, * ifp, * ofp; // ���, �Է�, ���
	//char strA[21], strB[21];
	//char* res;

	//ifp = fopen("data/b.txt", "w");
	//if (ifp == NULL)
	//{
	//	printf("�Է� ������ ���� ���߽��ϴ�.\n");
	//	return 1;
	//}

	//ofp = fopen("data/c.txt", "w");
	//if (ofp == NULL)
	//{
	//	printf("��� ������ ���� ���߽��ϴ�.\n");
	//	return 1;
	//}

	//rfp = fopen("data/a.txt", "r");
	//if (rfp == NULL)
	//{
	//	printf("��� ������ ���� ���߽��ϴ�.\n");
	//	return 1;
	//}

	//while (1)
	//{	
	//	res = fscanf(ifp, "%s", strB);
	//	if (res == EOF)
	//	{
	//		break;
	//	}

	//	fseek(rfp, 0, SEEK_SET);

	//	while (1)
	//	{
	//		res = fscanf(rfp, "%s", strA);
	//		if (res == EOF)
	//		{
	//			fprintf(ofp, "%s\n", strB);
	//			break;
	//		}
	//		else if (strcmp(strA, strB) == 0)
	//		{
	//			break;
	//		}
	//	}
	//}

	//fclose(rfp);
	//fclose(ifp);
	//fclose(ofp);

	/* Q2. 99.txt ������ �����, ���⿡ �������� �����ϵ��� �Ѵ�.
		   �׸��� fseek()�� �̿��ؼ� ���ϴ� �������� ���븸�� ã�� ����ϴ� ���α׷��� �ۼ��϶�.
		   ex> �� ���� ��� ? 2
				2��
				=======================
				2 x 1 = 2
				2 x 9 = 18
				======================== */

	//FILE* fp;
	//int num, strlength;
	//char str[80];

	//fp = fopen("data/99.txt", "a+");
	//if (fp == NULL)
	//{
	//	printf("������ ������ ���߽��ϴ�.\n");
	//	return 1;
	//}

	//for (int i = 2; i < 10; i++)
	//{
	//	for (int j = 1; j < 10; j++)
	//	{
	//		fprintf(fp, "%3d x %3d = %3d\n", i, j, i * j);
	//	}
	//}

	//printf("�� ���� ��� ? ");
	//scanf("%d", &num);
	//printf("\n%d��\n================\n", num);

	//fseek(fp, 0, SEEK_SET);
	//fgets(str, sizeof(str), fp);
	//strlength = strlen(str) + 1;

	//fseek(fp, (num - 2) * strlength * 9, SEEK_SET);

	//for (int i = 0; i < 9; i++)
	//{
	//	fgets(str, sizeof(str), fp);
	//	printf("%s", str);
	//}
	//printf("================\n");

	/*
	Q3. ���� ���� ���α׷� �����
		������ ���ϸ�� ���� �� �����Ǵ� ���ϸ��� �Է¹޾Ƽ�
		������ ������ �����ϴ� ���α׷� �ۼ�.
		��, txt ���� �Ӹ� �ƴ϶� �̹��� ���� �� ��� ������
		���Ͽ� �� �����ϰ� ������ �� �־�� �Ѵ�.
		���� ���� ������ ������� ȭ�鿡 ǥ�����ֵ��� �ϰ�,
		�� ���� n����Ʈ�� �����ϵ��� �Ѵ�.
		ex) 4����Ʈ
		���� ���� : source.txt
		��� ���� : dest.txt */

	FILE* fp, *Nfp;
	char FileNm[80], NewFileNm[80];
	int res, i = 0;

	printf("������ ���ϸ� : ");
	scanf("%s", FileNm);

	fp = fopen(FileNm, "r");
	if (fp == NULL)
	{
		printf("������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	printf("���� ���ϸ� : ");
	scanf("%s", NewFileNm);

	Nfp = fopen(NewFileNm, "w");
	if (Nfp == NULL)
	{
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	while (1)
	{
		//res = fgets();
		if (res == EOF)
		{
			printf("����� : 100'%'");
			break;
		}

		printf("����� : %d'%'", i *= 4);
	}

	fclose(fp);

	return 0;
}