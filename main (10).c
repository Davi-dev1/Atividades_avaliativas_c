/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao;
	
	
	printf("\n*************");
	printf("\nMenu Principal");
	printf("\n*************");
	printf("\n1  - VER SALDO");
	printf("\n2 - FAZER DEPÓSITO");
	printf("\n3 - SAIR");
	
	do{
	printf("\n Digite a opção :");
	scanf("%i",&opcao);
	
	
	
	switch(opcao){
		
		case 1:
		printf("VOCÊ ESTÁ VENDO O SALDO!!!!");	
		break;
		case 2:
		printf("VOCÊ ESTA REALIZANDO UM DEPÓSITO !!!!!");
		break;
		case 3 :
		printf("FINALIZANDO O SISTEMA !!!");
		break;
		default:
		printf("OPÇÃO INVÁLIDA!!!");		
	}	
	}while(opcao != 3);
	
}
