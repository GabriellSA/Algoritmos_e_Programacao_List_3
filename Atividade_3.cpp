/*Fa�a um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repeti��o
enquanto.
Entradas: Alturas
Sa�das: Menor altura*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura=1, menor;
	int contador=1;
	
	printf("Digite a altura da %d� pessoa (Em cent�metros): \n", contador);
	scanf("%f", &menor);
	
	while(contador<10){
		contador++;
		printf("Digite a altura da %d� pessoa (Em cent�metros): \n", contador);
		scanf("%f", &altura);
		if(altura<menor){
			menor=altura;}
		}
	printf("A menor altura �: %.2f\n\n", menor);
}

