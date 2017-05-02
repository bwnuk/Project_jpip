// Programm in C
// PROJECT number 30


#include "stdafx.h"
#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
//#include <cstring>
#define MAX_LINES 256
FILE *fr;
FILE *fw;

void error(int i)
{
	switch (i)
	{
	case 1:
		printf("BLAD ODCZYTU PLIKU");
		system("pause");
		exit(1);
		break;
	case 2:
		printf("BLAD PAMIECI");
		system("pause");
		exit(1);
		break;
	}
}

//														Fucntion to eliminate character

void fucntion(char *tab,  char lt, int num,  FILE *out, int *n)
{
	int i = 0;
	
	int x = 0;
	char *b;
	char ot[MAX_LINES];

	while ((b = tab[x]) != '\0')
	{
		if (b == lt)
		{
			if (*n < num)
			{
				x++;
				*n++;
				continue;
			}
			ot[i] = b;
		}
		else
			ot[i] = b;

		x++;
		i++;
	}
	ot[i] = '\0';
	
	fprintf(out, "%s", ot);

}

int main()
{
	system("chcp 1250");


	fr = fopen("input.txt", "r");
	fw = fopen("output.txt", "w");

	if (fr == NULL)
	{
		error(1);
	}

	char d[MAX_LINES], *dd, letter, b[MAX_LINES], symb;
	int number = 0;
	int lg, n = 0, x = 0, k = 0;

	;
	/*
	printf("Give text: \n");
	dd = gets(d);
	*/

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
	printf("Letter: %c \nNumber: %d \n", letter, number);


	while(fgets(d,MAX_LINES, fr)!=NULL)
	{
		lg = strlen(d);
		/*if (!(dd = (char *)malloc((unsigned)lg * sizeof(char))))
		{
			error(2);
		}*/
		fucntion(&d,  letter, number, fw, &n);
	}

	system("pause");

    return 0;
}