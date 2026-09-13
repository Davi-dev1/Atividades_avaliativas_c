/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //TODO : Receba dois números e um caractere representando uma operação matemática (+, -, *,). Utilize a estrutura switch/case para executar e exibir o resultado da operação. 
    
    //bom tive q criar um array e a partir dele setar os char das operações, as escolhas dos char são jogados dentro da escolha e usa %c para guardar 1 unico valor como é o caso de escolher entre + - *  ou /
    
    int numero1;
    int numero2;
    char operacao[4]={'+','-','*','/'};
    char escolha;
    
    
    printf("\nDigite o primeiro número:");
    scanf("%i",&numero1);
    
    printf("\nDigite o segundo número:");
    scanf("%i",&numero2);
    

    printf("\nEscolha uma operação matemática : \n1)%c \n2)%c \n3)%c \n4)%c \n",operacao[0],operacao[1],operacao[2],operacao[3]);
    scanf(" %c",&escolha);
    
    switch(escolha){
        
        case '+': 
    numero1+=numero2;
     printf("\nResultado da operação de soma é : %i",numero1);
     break;
         case '-': 
    numero1-=numero2;
     printf("\nResultado da operação de subtração é : %i",numero1);
     break;
        	case '*':
		numero1*=numero2;
		printf("\nResultado da operação de multiplicação é : %i",numero1);
		break;
			case '/':
		numero1/=numero2;
		printf("\nResultado da operação da divisão é : %i",numero1);
		break;
     
     default:
     printf("Opção Inválida");
        
    }
    
}
