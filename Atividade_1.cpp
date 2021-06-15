/*Construa um algoritmo que calcule o fatorial de um número usando a estrutura PARA...FAÇA, 
baseando-se na definição matemática (N! = 1x2x3x...x N-1 x N e 0! = 1 por definição)
Entradas: Número
Saídas: Fatorial*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero, fatorial;
	
	printf("Digite o valor do número: \n"); 
	scanf("%f", &numero);
	numero=fabs(numero);
	
	for(fatorial=1; numero>1; numero=numero-1){        
	fatorial=fatorial*numero;}
	
	printf("O fatorial do número é: %.2f\n\n", fatorial);
	
	system("pause");
	return 0;
}

