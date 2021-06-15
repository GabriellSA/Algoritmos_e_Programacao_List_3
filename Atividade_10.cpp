/*Fazer um algoritmo que leia números inteiros até que a quantidade lida seja 100 ou até que
seja lido um número negativo e mostrar a quantidade total de números lidos.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero=0, contador=0, total=0;
	
	printf("----------CONTADOR----------\n\n--Digite um valor negativo para parar o contador--\n\n");
	while(contador<100 && numero>=0){
		contador++;
		printf("Digite o valor do %dº número: ", contador);
		scanf("%d", &numero);
		if(numero>0) total++;	
	}
	system("cls");
	printf("----------CONTADOR----------\n\nA quantidade total de números lidos é: %d\n\n", total);
	system("pause");
	return 0;
}
