/*Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo
outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)
Entradas: N�mero 1 e 2
Sa�das: Resultado da multiplica��o*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero1, numero2, i, resultado=0;
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%f", &numero1);
	printf("Digite o segundo n�mero: \n");
	scanf("%f", &numero2);
	
	for(i=0; i<numero2; i++){
	   resultado=resultado+numero1;}
	printf("\nO resultado da multiplica��o �: %.2f\n\n", resultado);
	
	system("pause");
	return 0;
}

