/*Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N �
fornecido pelo usu�rio. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...fa�a.
Entradas: N�mero
Sa�das: Fatorial*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero, fatorial=1;
	
	printf("Digite o valor do n�mero: \n"); 
	scanf("%f", &numero);
	numero=fabs(numero);
	
	while(numero>1){        
	fatorial=fatorial*numero;
	numero=numero-1;}
	
	printf("\nO fatorial do n�mero �: %.2f\n\n", fatorial);
	
	system("pause");
	return 0;
}

