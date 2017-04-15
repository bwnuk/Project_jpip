// Programm in C


#include "stdafx.h"
#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define MAX_LINES 256



int main()
{
	char d[MAX_LINES], *dd, letter;
	int number = 0;

	printf("Give text: \n");

	dd = gets(d);

	printf("Give letter to delete in the text: ");

	scanf("%c", &letter);

	printf("Give number: ");

	scanf("%d", &number);

	printf("Text: %s \nLetter: %c \nNumberS: %d \n", dd, letter, number);

	system("pause");

    return 0;
}

