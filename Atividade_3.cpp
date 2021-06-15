/*Faça um algoritmo que apresenta a menor altura entre 10 pessoas, usando apenas a repetição
enquanto.
Entradas: Alturas
Saídas: Menor altura*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float altura=1, menor;
	int contador=1;
	
	printf("Digite a altura da %dº pessoa (Em centímetros): \n", contador);
	scanf("%f", &menor);
	
	while(contador<10){
		contador++;
		printf("Digite a altura da %dº pessoa (Em centímetros): \n", contador);
		scanf("%f", &altura);
		if(altura<menor){
			menor=altura;}
		}
	printf("A menor altura é: %.2f\n\n", menor);
}

