/*Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo
outro sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma)
Entradas: Número 1 e 2
Saídas: Resultado da multiplicação*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero1, numero2, i, resultado=0;
	
	printf("Digite o primeiro número: \n");
	scanf("%f", &numero1);
	printf("Digite o segundo número: \n");
	scanf("%f", &numero2);
	
	for(i=0; i<numero2; i++){
	   resultado=resultado+numero1;}
	printf("\nO resultado da multiplicação é: %.2f\n\n", resultado);
	
	system("pause");
	return 0;
}

