#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
	Source by GeeksForGeeks (https://www.geeksforgeeks.org)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	int* ptr = (int*)malloc(sizeof(int) * 2);
	int i;
	int* ptr_new;

	*ptr = 10;
	*(ptr + 1) = 20;

	ptr_new = (int*)realloc(ptr, sizeof(int) * 3);
	*(ptr_new + 2) = 30;
	
	for (i = 0; i < 3; i++) {
		printf("%d ", *(ptr_new + i));
	}
		
	_getch();
	return 0;
}
