/*Faça um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a média
das notas dos alunos e a média das notas das alunas. O algoritmo deverá apresentar os
resultados solicitados quando for fornecida uma nota negativa.
Entradas: Nota e sexo 
Saídas: Média*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota, mediaAlunas=0, mediaAlunos=0;
	char sexo;
	int contador=1, alunas=0, alunos=0;
	
	printf("\n- Os resultados serão mostrados quando uma nota negativa for digitada -\n\n");
	do{
		printf("Digite a nota do %dº aluno(a): \n", contador);
		scanf("%f", &nota);
		fflush(stdin);
		if(nota>0){
			contador++;
			printf("Digite o sexo do aluno (F ou M): \n");
			scanf("%c", &sexo);
			fflush(stdin);
			sexo = toupper (sexo);
			if(sexo == 'F'){
			    mediaAlunas=mediaAlunas+nota;
				alunas++;}
			else{
			    mediaAlunos=mediaAlunos+nota;
				alunos++;}		
		}
	}
	while (nota>0);
	system("cls");
	
	mediaAlunas=mediaAlunas/alunas;
	mediaAlunos=mediaAlunos/alunos;
	
	printf("A média dos alunos homens é: %.2f\n\n", mediaAlunos);
	printf("A média das alunas mulheres é: %.2f\n\n", mediaAlunas);
	
	system("pause");
	return 0;
}

