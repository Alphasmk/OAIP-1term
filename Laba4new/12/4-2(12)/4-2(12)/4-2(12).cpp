#include <stdio.h>
#include <iostream>


void main() {
    setlocale(LC_CTYPE, "rus");
    char t;
    printf("Введите символ: ");
    scanf_s("%c", &t);
    printf("  %c%c%c\n", t, t, t);
    printf("%c%c%c%c%c%c%c\n", t, t, t, t, t, t, t);
    printf("%c%c%c%c%c%c%c\n", t, t, t, t, t, t, t);
    printf("  %c%c%c\n", t, t, t);
}

//12-1