#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    char str[5];

    str[0] = 'a';
    str[1] = '\0';
    str[2] = '\0';

    for (int i=0; i < 4; i++)
    {
        str[i] = str[i+1];
        printf("%c", str[i]);
    }
    return 0;
}