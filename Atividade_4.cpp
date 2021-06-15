/*Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido
pelo usuário.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int N, contador;
	float total=0;
	
	printf("Digite o valor de N: \n");
	scanf("%d", &N);
	
	for(contador=1; contador<=N; contador++){
		total=total+(1.0/contador);}
	
	printf("\nO valor total de H é: %.2f\n\n", total);
	
	system("pause");
	return 0;
}
