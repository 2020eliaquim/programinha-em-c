#include <stdio.h>
#include "pessoal.c"

int somador();

int main(int argc, char *argv[]) {
	
	int x, y, result;
	char test;

	printf("Digite um valor Numerico: ");
	scanf("%d", &x);
	system("cls");

	printf("Digite outro valor Numerico: ");
	scanf("%d", &y);
	system("cls");

	result = somador(x, y);

	printf("O Resultado e: %d\n", result);

	Data();

	return 0;
}

int somador(int a, int b) {
	return a + b;
};