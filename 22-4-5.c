#define _SRT_CECURE_NO_WARNING
#include <stdio.h> 
#include <Windows.h> 
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char s[80];
	printf("Введите строку=");
	fgets(s, 79, stdin);
	printf("\n Вы ввели строку s= \"%s\"", s);
	int cnt = 0;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ' ') cnt++;
	}
	printf("\n В ней %d пробелов\n", cnt);
}