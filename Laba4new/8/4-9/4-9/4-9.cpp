﻿#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "rus");
	char t;
	printf("Введите символ: ");
	scanf_s("%c", &t);
	printf("    %c%c%c\n", t, t, t);
	printf("   %c%c%c%c%c\n", t, t, t, t, t);
	printf("   %c%c%c%c%c\n", t, t, t, t, t);
	printf("    %c%c%c\n", t, t, t);
	printf("     %c\n", t);
	printf("     %c\n", t);
	printf("%c%c%c%c%c%c%c%c%c%c%c\n", t, t, t, t, t, t, t, t, t, t, t);
	printf("     %c\n", t);
	printf("     %c\n", t);
	printf("     %c\n", t);
	printf("     %c\n", t);
	printf("    %c %c\n", t, t);
	printf("   %c   %c", t, t);
}