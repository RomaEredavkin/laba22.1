#define _SRT_CECURE_NO_WARNING
#include <stdio.h> 
#include <ctype.h> 
#include <Windows.h>  



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[80];
	printf("Введите строку=");
	fgets(s, 79, stdin);
	printf("\n Вы ввели строку s= \"%s\"", s);
	int cnt = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		s[i] = toupper(s[i]);
	}
	
	printf("Строка после обработки: \"%s\"", s);
}