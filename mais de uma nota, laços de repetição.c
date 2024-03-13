#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main () {
	setlocale(LC_ALL, "");
	float nota, soma = 0, media;
	int contador = 0;
	char opcao;

	do {
	printf("\nDigite a nota: ");
	scanf("%f",&nota);	
	
	soma += nota;
	contador++;
	
	fflush(stdin);
	
	printf("\nDeseja inserir mais uma nota? ");
	scanf("%c",&opcao);
	
	opcao = toupper(opcao);
	
	} while (opcao != 'N');
	
	media = soma / contador;
	printf("A média aritmética das notas é: %.1f \n", media);
	
	return 0;
}
