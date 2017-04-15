// Programm in C


#include "stdafx.h"
#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#define MAX_LINES 256


char fucntion(char *tab, char lt, int num)
{
	char b;
	while ((b = *tab) != '\0')
	{
		if (b == lt)
		{

		}

		tab++;
	}
}

int main()
{
	char d[MAX_LINES], *dd, letter;
	int number = 0;
	int lg;

	printf("Give text: \n");

	dd = gets(d);

	printf("Give letter to delete in the text: ");

	scanf("%c", &letter);

	//															Cleaning buffor
	
	while ((getchar()) != '\n');

	while( letter < 32 || letter > 126)
	{
		printf("Give correct letter: ");
		scanf("%c", &letter);
		while ((getchar()) != '\n');
	}



	printf("Give number: ");

	scanf("%d", &number);
	while ((getchar()) != '\n');

	while (number == 0)
	{
		printf("Give correct number: ");
		scanf("%d", &number);
		while ((getchar()) != '\n');
	}

	printf("Text: %s \nLetter: %c \nNumber: %d \n", dd, letter, number);

	lg = strlen(d);

	fucntion(*dd, letter, number);

	system("pause");

    return 0;
}

