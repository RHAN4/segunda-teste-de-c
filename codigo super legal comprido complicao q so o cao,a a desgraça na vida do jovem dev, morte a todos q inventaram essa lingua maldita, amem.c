#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main () {
	setlocale(LC_ALL, "");
	int valor, somaG = 0, somaP = 0, contadorG =0;
	int pares = 0, impares = 0;
	float mediaG, mediaP;
	
	printf("Digite um número: ");
	scanf("%i",&valor);
	
	while (valor != 0) {
		if (valor > 0) {
			contadorG++;
			somaG += valor;
			
			if (valor % 2 == 0) {
				pares++;
				
				somaP += valor;
			} else {
				impares++;
			}
		}
			printf("Digite um número: ");
			scanf("%i",&valor);
	}
	if (contadorG == 0) {
		printf("Não foi informado um número positivo.");
	} else {
		mediaG = somaG / (float) contadorG;
		mediaP = somaP / (float) pares;
		
		printf("\nQuantidade de pares: %i", pares);
		printf("\nQuantidade de impares: %i", impares);
		printf("\nMédia geral: %.1f", mediaG);
		printf("\nMédia de números pares: %.1f", mediaP);
	}
	return 0;
}
