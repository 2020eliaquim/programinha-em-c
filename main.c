#include <stdio.h>

int somador();

int main(int argc, char *argv[]) {
	
	int x, y, result;
	char test;

	printf("Digite um valor Numerico: ");
	scanf("%d", &x);

	printf("Digite outro valor Numerico: ");
	scanf("%d", &y);

	result = somador(x, y);

	printf("O Resultado e: %d", result);

	return 0;
}

int somador(int a, int b) {
	return a + b;
};