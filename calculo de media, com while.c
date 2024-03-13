#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h> 

int main () {
	setlocale(LC_ALL, "");
	float nota, soma = 0, media;
	int i;
	
	fflush(stdin);
	
	for (i = 1; i <= 2; i++) {	
	printf("Digite a %iª nota: ", i);
	scanf("%f",&nota);	

	while (nota < 0 || nota > 10) {	
	printf("Digite a %iª nota: ");
	scanf("%f",&nota);	
	}
	
	soma += nota;	
	
}
	
	media = soma / 2;
	
	printf("Média: %.1f \n", media);
	
	return 0;
}
