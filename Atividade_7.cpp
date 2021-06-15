/*Elabore um algoritmo que apresenta as compras de frutas efetuadas por usuário (quantidade
de frutas para cada tipo), sendo elas identificadas por meio de um número.
1 => ABACAXI
2 => MAÇA
3 => PERA
Usando a instrução faca...enquanto identifique quais as frutas desejadas por seu usuário,
lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
Deve existir o cuidado na identificação correta das frutas, pois o feirante só possui estes três
tipos. Caso o usuário escolha uma fruta não existente deve ser notificado que a fruta não está
disponível e a solicitação deve ser feita novamente sobre qual fruta ele deseja.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int fruta, abacaxi, maca, pera, final=1;
	
	do{
		printf("----------MENU----------\n\n1 => ABACAXI\n2 => MAÇA\n3 => PERA\n\n4 => FINALIZAR COMPRAS\n\n");
		printf("Escolha um produto digitando seu código (1 a 3): ");
		scanf("%d", &fruta);
		
		switch(fruta){
			case 1:
			    printf("Quantas unidades de abacaxi você deseja ? ");
			    scanf("%d", &abacaxi);
				printf("\nADICIONADO AO CARRINHO\n\n");
				system("pause"); 
				system("cls"); break;
			case 2:
				printf("Quantas unidades de maça você deseja ? ");
			    scanf("%d", &maca); 
			    printf("\nADICIONADO AO CARRINHO\n\n");
				system("pause"); 
				system("cls"); break;
			case 3:
				printf("Quantas unidades de pera você deseja ? ");
			    scanf("%d", &pera); 
			    printf("\nADICIONADO AO CARRINHO\n\n");
				system("pause"); 
				system("cls"); break;
			case 4:
			    final=4; 
				system("cls"); break;
			default:
			    system("cls");
				printf("----------FRUTA NÃO DISPONIVEL----------\nPor favor escolha as opções do menu:\n\n");	
		}
	} while (final==1);
	
	printf("----------LISTA DE COMPRAS FINAL----------\n\nABACAXI = %d unidades\nMAÇA = %d unidades\nPERA = %d unidades\n\n", abacaxi, maca, pera);
	
	system("pause");
	return 0;
}

