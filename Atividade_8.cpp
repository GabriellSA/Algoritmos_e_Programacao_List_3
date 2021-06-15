/*Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes
algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada
produto e calcule e escreva a identificação e o novo preço após o aumento.
Considere as seguintes situações:
a) o mercador informa o número de produtos que possui antes de entrar com o preço
dos produtos
b) o mercador informa produto a produto e você deve perguntar se tem mais algum
produto a ser calculado o aumento
c) o preço do último produto fornecido pelo mercador é -1*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int menu, i=1, contador=1, unidades;
	char nome[50];
	float valor, total;
	
	do{
	printf("----------ESTRUTURA DE REPETIÇÃO----------\n\nfor -> [1]\nwhile -> [2]\ndo while -> [3]");
	printf("\n\nEscolha uma opção: ");
	scanf("%d", &menu);
	system("cls");
	
	switch(menu){
		case 1:
			for(i=1; i==1; contador++){
			    printf("Digite o nome do %dº produto: ", contador);
			    fflush(stdin);
				fgets(nome, 50, stdin);
				printf("Digite a quantidade de unidades: ");
				scanf("%d", &unidades);
			    printf("Digite o preço atual do produto: ");
			    scanf("%f", &valor);
			    fflush(stdin);
			    valor=(valor*0.1)+valor;
			    total=valor*unidades;
			    printf("\nO novo valor únitario do produto %sR$ %.2f reais", nome, valor);
			    printf("\n\nValor total de todas as unidades\n%.2f reais\n\n", total);
			    printf("Deseja calcular o aumento de mais algum produto ?\nDigite [1] para SIM\nDigite [2] para NÃO\n");
			    scanf("%d", &i);
			    system("cls");
			}break;
		case 2:
			while(i==1){
				printf("Digite o nome do %dº produto: ", contador);
				contador++;
			    fflush(stdin);
				fgets(nome, 50, stdin);
				printf("Digite a quantidade de unidades: ");
				scanf("%d", &unidades);
			    printf("Digite o preço atual do produto: ");
			    scanf("%f", &valor);
			    fflush(stdin);
			    valor=(valor*0.1)+valor;
			    total=valor*unidades;
			    printf("\nO novo valor únitario do produto %sR$ %.2f reais", nome, valor);
			    printf("\n\nValor total de todas as unidades\n%.2f reais\n\n", total);
			    printf("Deseja calcular o aumento de mais algum produto ?\nDigite [1] para SIM\nDigite [2] para NÃO\n");
			    scanf("%d", &i);
			    system("cls"); 
			}break;
		case 3:
			do{
				printf("Digite o nome do %dº produto: ", contador);
				contador++;
			    fflush(stdin);
				fgets(nome, 50, stdin);
				printf("Digite a quantidade de unidades: ");
				scanf("%d", &unidades);
			    printf("Digite o preço atual do produto: ");
			    scanf("%f", &valor);
			    fflush(stdin);
			    valor=(valor*0.1)+valor;
			    total=valor*unidades;
			    printf("\nO novo valor únitario do produto %sR$ %.2f reais", nome, valor);
			    printf("\n\nValor total de todas as unidades\n%.2f reais\n\n", total);
			    printf("Deseja calcular o aumento de mais algum produto ?\nDigite [1] para SIM\nDigite [2] para NÃO\n");
			    scanf("%d", &i);
			    system("cls");	
			} while (i==1); break;		
	}
	printf("Programa encerrado\nVoltar ao menu ?\n\n");
	system("pause");
	system("cls");
	} while(true);
	return 0;
} 
