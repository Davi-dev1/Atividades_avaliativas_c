/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void verSaldo(float SaldoAtual){
   printf("Seu saldo atual é :R$ %.2f ",SaldoAtual); //iSSO AQUI SERIA CONERSÃO IMPLICITA, NÓS CRIAMOS A VARIAVEL meuSaldo DENTRO DA MAIN E DEPOIS COLOCAMOS O VALOR DELA DENTRO DA VARIAVEL SaldoAtual
}

float sacar(float SaldoAtual){
    float qtdSaldo;
    printf("\n\nDigite um valor para o saque");
    scanf("%f",&qtdSaldo);
    if(qtdSaldo > SaldoAtual){
        printf("\n\nImpossível sacar esse valor !");

    }else{
    SaldoAtual -= qtdSaldo;
    printf("Saque realizado com sucesso! Valor do saldo agora :R$ %.2f",SaldoAtual);
    return SaldoAtual;
}
}

float deposito(float SaldoAtual){
    
    float qtdDeposito;
    printf("\n\n Digite um valor para o depósito");
    scanf("%f",&qtdDeposito);
    SaldoAtual += qtdDeposito;
    printf("\n\nDepósito Realizado com sucesso! Valor do saldo agora : R$ %.2f",SaldoAtual );
    return SaldoAtual;
    
    
}

int main()
{
   
   
   float meuSaldo = 0.00;
   printf("%.2f",meuSaldo);
  int opcao;
   
  do{
    printf("\n****************");
    printf("\n Menu Principal");
    printf("\n************");
    printf("\n1-Ver Saldo");
    printf("\n2-Saque");
    printf("\n3-Realizar Depósito");
    printf("\n4-Sair");
       
      printf("\n\nDigite uma opção : ");
      scanf("%i",&opcao);
   
  switch(opcao){
       
      case 1 :
       verSaldo(meuSaldo);
      
       break;
       case 2:
       meuSaldo = sacar(meuSaldo);
       
       break;
       case 3:
       meuSaldo = deposito(meuSaldo);
       break;
       case 4:
       printf("Fechando o sistema");
       break;
       default:
       printf("\nOpção Inválida");
       
       
       
  }
   
   
  }while(opcao != 4);
   
}
