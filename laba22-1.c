#define _SRT_CECURE_NO_WARNING
#include <stdio.h> 
#include <Windows.h> 
void main(){ 
	SetConsoleCP(1251); 
	SetConsoleOutputCP(1251); 
	char name[12]; 
	printf("������� ���� ���:"); 
	fgets(name, 11, stdin); 
	printf("���������� ���� %s\n", name); 
	


}
