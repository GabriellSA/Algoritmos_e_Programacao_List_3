/*Elabore um algoritmo que apresenta as compras de frutas efetuadas por usu�rio (quantidade
de frutas para cada tipo), sendo elas identificadas por meio de um n�mero.
1 => ABACAXI
2 => MA�A
3 => PERA
Usando a instru��o faca...enquanto identifique quais as frutas desejadas por seu usu�rio,
lembrando que ele pode desejar somente um tipo de fruta ou mais que um.
Deve existir o cuidado na identifica��o correta das frutas, pois o feirante s� possui estes tr�s
tipos. Caso o usu�rio escolha uma fruta n�o existente deve ser notificado que a fruta n�o est�
dispon�vel e a solicita��o deve ser feita novamente sobre qual fruta ele deseja.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int fruta, abacaxi, maca, pera, final=1;
	
	do{
		printf("----------MENU----------\n\n1 => ABACAXI\n2 => MA�A\n3 => PERA\n\n4 => FINALIZAR COMPRAS\n\n");
		printf("Escolha um produto digitando seu c�digo (1 a 3): ");
		scanf("%d", &fruta);
		
		switch(fruta){
			case 1:
			    printf("Quantas unidades de abacaxi voc� deseja ? ");
			    scanf("%d", &abacaxi);
				printf("\nADICIONADO AO CARRINHO\n\n");
				system("pause"); 
				system("cls"); break;
			case 2:
				printf("Quantas unidades de ma�a voc� deseja ? ");
			    scanf("%d", &maca); 
			    printf("\nADICIONADO AO CARRINHO\n\n");
				system("pause"); 
				system("cls"); break;
			case 3:
				printf("Quantas unidades de pera voc� deseja ? ");
			    scanf("%d", &pera); 
			    printf("\nADICIONADO AO CARRINHO\n\n");
				system("pause"); 
				system("cls"); break;
			case 4:
			    final=4; 
				system("cls"); break;
			default:
			    system("cls");
				printf("----------FRUTA N�O DISPONIVEL----------\nPor favor escolha as op��es do menu:\n\n");	
		}
	} while (final==1);
	
	printf("----------LISTA DE COMPRAS FINAL----------\n\nABACAXI = %d unidades\nMA�A = %d unidades\nPERA = %d unidades\n\n", abacaxi, maca, pera);
	
	system("pause");
	return 0;
}

