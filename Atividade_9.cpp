/*Uma pesquisa sobre algumas características físicas da população de uma determinada região
coletou os seguintes dados, referentes a cada habitante:
a) sexo (masculino, feminino);
b) cor dos olhos (azuis, verdes, castanhos, pretos);
c) cor dos cabelos (loiros, castanhos, pretos);
d) idade em anos.
Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade
igual a –1. Fazer um algoritmo que determine e escreva:
a) a maior idade dos habitantes pesquisados;
b) a porcentagem de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos
inclusive e que tenham olhos verdes e cabelos loiros.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char sexo; 
	int contador=1, olho, corOlho, cabelo, corCabelo, idade, maiorIdade=0, total;
	float porcentagem, porcentagemTotal, mulheres=0, requisitadas=0, homens=0;
	
	do{
		do{
		    printf("Digite o sexo do %dº habitante (F ou M): ", contador);
		    scanf("%c", &sexo);
		    fflush(stdin);
		    sexo = toupper (sexo);
		    if(sexo!='F' && sexo!='M')
				printf("\nSEXO INVÁLIDO!\n");					
		} while (sexo!='F' && sexo!='M');
		
		do{
			printf("\nSelecione a cor dos olhos desse habitante:\n\n1 -> AZUL\n2 -> VERDE\n3 -> CASTANHO\n4 -> PRETO\n");
		    scanf("%d", &olho);
		    fflush(stdin);
		    switch(olho){
		    	case 1: corOlho = 1; break;
		    	case 2: corOlho = 2; break;
		    	case 3: corOlho = 3; break;
		    	case 4: corOlho = 4; break;
		    	default: printf("\nCOR INVÁLIDA!\nPor favor, selecione uma opção do menu "); break;
		} 				
		} while(olho<1 || olho>4);
		
		do{
			printf("\nSelecione a cor dos cabelos desse habitante:\n\n1 -> LOIRO\n2 -> CASTALHO\n3 -> PRETO\n");
		    scanf("%d", &cabelo);
		    fflush(stdin);
		    switch(cabelo){
		    	case 1: corCabelo = 1; break;
		    	case 2: corCabelo = 2; break;
		    	case 3: corCabelo = 3; break;
		    	default: printf("\nCOR INVÁLIDA!\nPor favor, selecione uma opção do menu "); break;
		} 				
		} while(cabelo<1 || cabelo>3);
		
		do{
			printf("\nDigite a idade desse habitante: ");
		    scanf("%d", &idade);
		    fflush(stdin);
		    if(idade>150)
		        printf("\nIDADE INVÁLIDA!\nPor favor, digite um valor entre 0 e 150 anos");
		} while(idade>150);
		
		if(idade>maiorIdade)
		    maiorIdade=idade;
		if(sexo=='F' && idade>0)
		    mulheres++;
		if(sexo=='M' && idade>0)
		    homens++;
		if(sexo=='F' && idade>18 && idade<35 && corOlho==2 && corCabelo==1)
		    requisitadas++;
		contador++;
		system("cls");	
	}while(idade!=-1);
	
	total=homens+mulheres;
	porcentagem=(requisitadas/mulheres);
	porcentagemTotal=(requisitadas/(mulheres+homens));
	
	printf("----------DADOS SOBRE A PESQUISA----------\n\nPopulação total: %.2d\nPopulação de mulheres: %.2f\nPopulação de homens: %.2f\n\n", total, mulheres, homens);
	printf("A) O habitante mais velho possui %d anos\n", maiorIdade);
	printf("B) A porcentagem de habitantes do sexo feminino cuja idade está entre 18 e 35 anos\ne que tenham olhos verdes e cabelos loiros é de:\n");
	printf("%.2f por centos da população feminina\n", porcentagem);
	printf("%.2f por centos da população total\n\n", porcentagemTotal);
	
	system("Pause");
	return 0;
}

