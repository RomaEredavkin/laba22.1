#define _SRT_CECURE_NO_WARNING
#include <stdio.h> 
#include <Windows.h> 
void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	printf("������� ������=");
	int ch = getchar();
	for (int c = ch; c <= ch + 19; c++) {
		printf("'%c' (%d)\n", c, c);
	}
	printf("\n\n\n");
	
}

