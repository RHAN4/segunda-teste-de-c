#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
	setlocale(LC_ALL, "");
	float nota, soma = 0, media;
	int contador = 0, resposta;
	
	printf("Digite a nota: ");
	scanf("%f",&nota);
	
	do {
		printf("Deseja inserir mais uma nota? (1 para sim | 0 para n�o): ");
		scanf("%d",&resposta);
		
		if (resposta == 1) {
			printf("Digite a nota: ");
			scanf("%f",&nota);
			
			soma =+ nota;
			contador++;
		}
	} while (resposta != 0);
	
	media = soma / contador;
	printf("A m�dia aritm�tica das notas �: %.1f\n", media);
	
	return 0;
}
