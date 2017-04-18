// Programm in C


#include "stdafx.h"
#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
//#include <cstring>
#define MAX_LINES 256

//														Fucntion to eliminate character
/*
char fucntion(char *tab,  char lt, int num, int lg)
{
	int i = 0;
	int n = 0;
	int x = 0;
	char *b;

	while ((b = tab[x]) != '\0')
	{
		if (b == lt)
		{
			if (n < num)
			{
				for (int x = i; x <= lg; x++)
				{
					x++;
					b = tab[x];
				}
				n++;
			}
		}

		x++;
		i++;
	}
	
	return b;
}
*/
int main()
{
	char d[MAX_LINES], *dd, letter, b[MAX_LINES], symb;
	int number = 0;
	int lg, n = 0, x = 0, k = 0;

	printf("Give text: \n");
	dd = gets(d);
	
	printf("Give letter to delete in the text: ");
	scanf("%c", &letter);

	//															Cleaning buffor
	while ((getchar()) != '\n');

	//															Test if it's character

	while( letter < 32 || letter > 126)
	{
		printf("Give correct letter: ");
		scanf("%c", &letter);
		while ((getchar()) != '\n');
	}

	printf("Give number: ");
	scanf("%d", &number);
	
	//															Cleaning buffor
	
	while ((getchar()) != '\n');

	//															Test if it's number

	while (number == 0)
	{
		printf("Give correct number: ");
		scanf("%d", &number);
		while ((getchar()) != '\n');
	}

	//																Intput
	system("cls");
	printf("Text: %s \nLetter: %c \nNumber: %d \n", dd, letter, number);

	lg = strlen(d);

	//b = fucntion(&dd,  letter, number, lg);
	//printf("\nThe final text: %s\n\n", &b);
	
	while ((symb = dd[x]) != '\0')
	{
		if (symb == letter)
		{
			if (n < number)
			{
				n++;
				x++;
				continue;
			}
			else
				b[k] = symb;
		}
		else
			b[k] = symb;

		x++;
		k++;
		
	}
	b[k] = '\0';
	

	printf("\nThe final text: %s\n\n", &b);

	system("pause");

    return 0;
}