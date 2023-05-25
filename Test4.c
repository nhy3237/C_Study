#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int T;
    char str[20][1000];

    scanf("%d", &T);

    for (int i = 0; i < 2; i++)
    {
        scanf("%s", str[i]);
    }

    return 0;
}