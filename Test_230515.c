#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	/* Q1. p544 도전 실전 예제 */
	//FILE* rfp, * ifp, * ofp; // 등록, 입력, 출력
	//char strA[21], strB[21];
	//char* res;

	//ifp = fopen("data/b.txt", "w");
	//if (ifp == NULL)
	//{
	//	printf("입력 파일을 열지 못했습니다.\n");
	//	return 1;
	//}

	//ofp = fopen("data/c.txt", "w");
	//if (ofp == NULL)
	//{
	//	printf("출력 파일을 열지 못했습니다.\n");
	//	return 1;
	//}

	//rfp = fopen("data/a.txt", "r");
	//if (rfp == NULL)
	//{
	//	printf("등록 파일을 열지 못했습니다.\n");
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

	/* Q2. 99.txt 파일을 만들고, 여기에 구구단을 저장하도록 한다.
		   그리고 fseek()을 이용해서 원하는 구구단의 내용만을 찾아 출력하는 프로그램을 작성하라.
		   ex> 몇 단을 출력 ? 2
				2단
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
	//	printf("파일을 만들지 못했습니다.\n");
	//	return 1;
	//}

	//for (int i = 2; i < 10; i++)
	//{
	//	for (int j = 1; j < 10; j++)
	//	{
	//		fprintf(fp, "%3d x %3d = %3d\n", i, j, i * j);
	//	}
	//}

	//printf("몇 단을 출력 ? ");
	//scanf("%d", &num);
	//printf("\n%d단\n================\n", num);

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
	Q3. 파일 복사 프로그램 만들기
		복사할 파일명과 복사 후 생성되는 파일명을 입력받아서
		파일의 내용을 복사하느 프로그램 작성.
		단, txt 파일 뿐만 아니라 이미지 파일 등 모든 종류의
		파일에 다 동일하게 적용할 수 있어야 한다.
		복사 진행 과정을 백분율로 화면에 표시해주도록 하고,
		한 번에 n바이트씩 복사하도록 한다.
		ex) 4바이트
		원본 파일 : source.txt
		대상 파일 : dest.txt */

	FILE* fp, *Nfp;
	char FileNm[80], NewFileNm[80];
	int res, i = 0;

	printf("복사할 파일명 : ");
	scanf("%s", FileNm);

	fp = fopen(FileNm, "r");
	if (fp == NULL)
	{
		printf("파일을 열지 못했습니다.\n");
		return 1;
	}

	printf("생성 파일명 : ");
	scanf("%s", NewFileNm);

	Nfp = fopen(NewFileNm, "w");
	if (Nfp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		//res = fgets();
		if (res == EOF)
		{
			printf("진행률 : 100'%'");
			break;
		}

		printf("진행률 : %d'%'", i *= 4);
	}

	fclose(fp);

	return 0;
}