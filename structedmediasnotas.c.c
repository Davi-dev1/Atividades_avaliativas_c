#include <stdio.h>
//Definição de uma struct Aluno
//typedef é um tipo de dado que vc vai definir no caso abaixo nós crimos uma estrutura

typedef struct{
 	char  nome[50];
 	char  ra[15];
 	float notas[5];
}Aluno;

int main(){
	
	Aluno aluno1;
	float soma = 0.0;

	printf("Nome : ");
	scanf(" %49[^\n]",aluno1.nome);
	printf("\nRa : ");
	scanf("%14s",aluno1.ra);
   
	for(int i=0;i<4;i++){
		printf("\nDigite  a nota %d: ",i+1);
		scanf("%f",&aluno1.notas[i]);
    	soma +=aluno1.notas[i];
	}
	aluno1.notas[4] = soma /4.0;

	printf("\n == Dados do Aluno ");
	printf("Nome : %s\n ",aluno1.nome);
	printf("RA : %s\n ",aluno1.ra);
	printf("Notas : ");
	for(int i = 0;i<4; i++){
	printf("[%.1f] ", aluno1.notas[i]);}


 

    printf("\nMédia Final: %.2f\n", aluno1.notas[4]);


     

	


}