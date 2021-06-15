/*Voc� foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de
piadas. Estar�o concorrendo ao pr�mio 3 finalistas, cujos nomes ser�o fornecidos. A
quantidade de ju�zes ser� definida no dia da apura��o e para cada juiz o algoritmo solicitar� a
nota para cada candidato. A nota poder� variar de 0 (zero) a 100(cem). O algoritmo dever�
apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do
vencedor ap�s o voto de todos os ju�zes.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i=0, d=0, juizes, menu;
	char nome[3][50];
	float nota1, nota2, nota3, total1=0, total2=0, total3=0;
	
	printf("----------CONCURSO DE PIADAS----------\n---------------VOTA��O----------------\n\n");
	for(i=0; i<3; i++){
		printf("Digite o nome do %d� finalista: ", i+1);
		scanf("%s", &nome[i]);
	}
	printf("\nInforme a quantidade de ju�zes: ");
	scanf("%d", &juizes);
	
	while(d<juizes){
		system("cls");
		d++;
		do{
			printf("%d� Juiz, digite uma nota para o finalista %s (0 a 100): ", d, nome[0]);
		    scanf("%f", &nota1);
		    fflush(stdin);
		    if(nota1<0 || nota1>100)
		        printf("NOTA DIGITADA INV�LIDA!\n\n");
		} while (nota1<0 || nota1>100);
		total1=total1+nota1;
		
		do{
			printf("%d� Juiz, digite uma nota para o finalista %s (0 a 100): ", d, nome[1]);
		    scanf("%f", &nota2);
		    fflush(stdin);
		    if(nota2<0 || nota2>100)
		        printf("NOTA DIGITADA INV�LIDA!\n\n");
		} while (nota2<0 || nota2>100);
		total2=total2+nota2;
		
		do{
			printf("%d� Juiz, digite uma nota para o finalista %s (0 a 100): ", d, nome[2]);
		    scanf("%f", &nota3);
		    fflush(stdin);
		    if(nota3<0 || nota3>100)
		        printf("NOTA DIGITADA INV�LIDA!\n\n");
		} while (nota3<0 || nota3>100);
		total3=total3+nota3;
	}
	
	system("cls");
	if(total1>total2 && total1>total3 && total1!=total2 && total1!=total3)
	    printf("----------O VENCEDOR DO CONCURSO �: '%s'----------\n\n", nome[0]);
	else if(total2>total1 && total2>total3 && total2!=total1 && total2!=total3)
	    printf("----------O VENCEDOR DO CONCURSO �: '%s'----------\n\n", nome[1]);
	else if(total3>total1 && total3>total2 && total3!=total1 && total3!=total1)
	    printf("----------O VENCEDOR DO CONCURSO �: '%s'----------\n\n", nome[2]);
	else if(total1==total2 && total1==total3)
	    printf("----------OS TR�S FINALISTAS EMPATARAM----------\n\n");
	else if(total1==total2 && total3!=total1)
	    printf("----------OS FINALISTAS '%s' E '%s' EMPATARAM----------\n\n", nome[0], nome[1]);
	else printf("----------OS FINALISTAS '%s' E '%s' EMPATARAM----------\n\n", nome[1], nome[2]);
	
	printf("NOTAS TOTAIS:");
	printf("\n%s = %.2f", nome[0], total1);
	printf("\n%s = %.2f", nome[1], total2);
	printf("\n%s = %.2f\n\n", nome[2], total3);
	
system("pause");
return 0;
}
