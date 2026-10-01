#include <stdio.h>
//Definição de uma struct Aluno
//typedef é um tipo de dado que vc vai definir no caso abaixo nós crimos uma estrutura

typedef struct{
 	char  nome[50];
 	char  ra[15];
 	float nota;
}Aluno;

int main(){
	Aluno aluno1;
     printf("================= CADASTRAR ALUNO ==============\n");
     
     printf("\nNome : ");
     scanf("%49[^\n]",aluno1.nome);
     
     printf("\nRa : ");
     scanf("%14s",aluno1.ra);
     
     printf("\nNota : ");
     scanf("%f",&aluno1.nota);
     
     printf("\n======= Dados dos Alunos =====");
     printf("\nNome : %s",aluno1.nome);
     printf("\nRa : %s",aluno1.ra);
     printf("\nNota : %.1f",aluno1.nota);

	
	
	
}
