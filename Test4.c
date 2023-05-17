#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    //int N, rank, x[50], y[50]; // 전체 사람 수, 덩치 등수, 키, 몸무게

    //scanf("%d", &N);

    //for (int i = 0; i < N; i++)
    //{
    //   scanf("%d %d", &x[i], &y[i]);
    //}

    //for (int i = 0; i < N; i++)
    //{
    //   rank = 1;
    //   for (int j = 0; j < N; j++)
    //   {
    //      if (i == j) continue;
    //      if (x[i] < x[j] && y[i] < y[j])
    //      {
    //         rank += 1;
    //      }
    //   }
    //   printf("%d ", rank);
    //}

    char N[8]; // 방 번호
    int num[10] = { 0 }; // 0~9까지의 정수 개수 구하는 배열
    int length, cntSet = 0; // 방 번호 길이, 세트 개수

    scanf("%s", &N);

    length = strlen(N);

    for (int i = 0; i < length; i++)
    {
        num[N[i] - '0']++; // 문자 상수 '0' ~ '9' = 아스키 코드 48 ~ 57
    }
     
    num[9] = (num[9] += num[6] + 1) / 2;

    for (int i = 0; i < 10; i++)
    {
        if (i == 6) continue;

        if (cntSet < num[i]) cntSet = num[i];
    }

    printf("%d", cntSet);

    return 0;
}