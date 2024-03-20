#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main () {
	setlocale(LC_ALL, "");
	int idade, opcao, maiorIdade = 0, menorIdade = 999;
	int quantidadeSalarios = 0, mulheres5k = 0;
	char sexo;
	float salario, somaSalarios = 0, mediaSalarial;
	
	do{
		printf("Código \t Descrição \n");
		printf("1 \t Adicionar pessoa \n");
		printf("2 \t Exibir resultados e sair \n");
		printf("Digite a opção desejada: ");
		scanf("%i",&opcao);
	
		switch(opcao) {
			case 1:
				printf("Digite sua idade: ");
				scanf("%i",&idade);
				
				fflush(stdin);
				printf("Digite o sexo - M ou F: ");
				scanf("%c",&sexo);
				
				printf("Digite o salário: ");
				scanf("%f",&salario);
				
				sexo = toupper(sexo);
				
				if (idade > maiorIdade) {
					maiorIdade = idade;
				} 
				
				if (idade < menorIdade) {
					menorIdade = idade;
				}
				
				quantidadeSalarios++;
				somaSalarios += salario;
				
				if (sexo == 'F' && salario >= 5000) {
					mulheres5k++;
				}
				 break;
				 
			case 2:
				mediaSalarial = somaSalarios / quantidadeSalarios;
				
				printf("\n=== Exibindo resultados ===\n");
				printf("Média salarial do grupo: R$ %.2f \n", mediaSalarial);
				 printf("\nMaior idade: %i", maiorIdade);
				 printf("\nMenor idade: %i", menorIdade);
				 printf("\nQuantidade de mulheres com salário acima de 5k: %i", mulheres5k);
				 break;
				 
				default:
					printf("Opção inválida.");
		} 
	}while (opcao != 2);
	
	return 0;
}
