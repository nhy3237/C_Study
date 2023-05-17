#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
	char word[101];
	int size = strlen(word); //sizeof(word) / sizeof(word[0]);
	int cnt = 0, res = 0;

	while (1)
	{	
		scanf("%c", &word);
		cnt++;

		if (word[0] == '\n') break;
	}

	res = 1;

	for (int i = 0; i < cnt; i++)
	{
		if (word[i] != word[cnt - 1 - i] && cnt/2 != i)
		{
			res = 0;
		}
		else
		{
			break;
		}
	}

	printf("%d", res);

	return 0;
}