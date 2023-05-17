#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void smallLetter(char* pS); //대문자를 소문자로 변환하는 함수

int main()
{
	char str1[80], str2[80], str3[80];
	char* pS1, * pS2, * pS3;
	char min[80], mid[80], max[80];

	printf("세 단어 입력 : ");
	scanf("%s %s %s", str1, str2, str3);
	
	smallLetter(&pS1, str1);
	smallLetter(&pS2, str2);
	smallLetter(&pS3, str3);

	if (strcmp(pS1, pS2) > 0)
	{
		if (strcmp(pS2, pS3) > 0)
		{
			printf("%s, %s, %s", str3, str2, str1);
		}
		else
		{
			printf("%s, %s, %s", str2, str3, str1);
		}
	}
	else
	{
		if (strcmp(pS1, pS3) > 0)
		{
			printf("%s, %s, %s", str3, str1, str2);
		}
		else
		{
			printf("%s, %s, %s", str1, str3, str2);
		}
	}
}

void smallLetter(char* pS, char *pN)
{
	strcpy(pS, pN);

	for (int i = 0; i < strlen(pS); i++)
	{
		if (pS[i] >= 65 && pS[i] <= 90)
		{
			pS[i] += 32;
		}
	}
}