/*Fazer um algoritmo que leia n�meros inteiros at� que a quantidade lida seja 100 ou at� que
seja lido um n�mero negativo e mostrar a quantidade total de n�meros lidos.*/

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
		printf("Digite o valor do %d� n�mero: ", contador);
		scanf("%d", &numero);
		if(numero>0) total++;	
	}
	system("cls");
	printf("----------CONTADOR----------\n\nA quantidade total de n�meros lidos �: %d\n\n", total);
	system("pause");
	return 0;
}
