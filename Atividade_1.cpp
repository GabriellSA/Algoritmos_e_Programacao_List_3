/*Construa um algoritmo que calcule o fatorial de um n�mero usando a estrutura PARA...FA�A, 
baseando-se na defini��o matem�tica (N! = 1x2x3x...x N-1 x N e 0! = 1 por defini��o)
Entradas: N�mero
Sa�das: Fatorial*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float numero, fatorial;
	
	printf("Digite o valor do n�mero: \n"); 
	scanf("%f", &numero);
	numero=fabs(numero);
	
	for(fatorial=1; numero>1; numero=numero-1){        
	fatorial=fatorial*numero;}
	
	printf("O fatorial do n�mero �: %.2f\n\n", fatorial);
	
	system("pause");
	return 0;
}

