#include <stdio.h>


float meuSaldo = 0.00;
void saldo(float valor){
	
   float saldoAtual = valor;
   printf("O seu saldo é : %f",saldoAtual); 
}



int main(){
	
	
	
	int opcao;
	do{
	
	printf("\n*************");
	printf("\n Menu Principal");
	printf("\n*********");
	printf("\n1 - Ver saldo");
	printf("\n2 - Método para Saque");
	printf("\n3 - Método para Depósito");
	printf("\n4 - Sair");
  
  	printf("\nDigite a opção : ");
  	scanf("%i",&opcao);
  	
  	switch(opcao){
  		
  		case 1:
  		   saldo(meuSaldo);
  			break;
  		case 2:
  			///
  			break;
  			case 3 :
  				///
  				break;
  				case 4 :
  					/////
  					break;
  					default:
  						printf("Opção Inválida !!");
  							
	  }
  	
  	
  }while(opcao !=3);
	
}
