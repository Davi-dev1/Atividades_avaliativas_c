/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //TODO :Defina um número secreto predeterminado. Peça para o usuário tentar adivinhar. O laço do while deve repetir até que o usuário acerte o número, informando uma mensagem de vitória ao final. 

  int numeroSecreto = 190;
  int tentativa;
  
  
  
  do{
  printf("\nTente adivinhar o número secreto\n");
  scanf("%i",&tentativa);
  
      if(tentativa != numeroSecreto){
          printf("\nTente novamente....\n");
      }
      
      
      
  }while(tentativa != numeroSecreto);
  
  printf("\nPARBÉNS POR TER DESCOBERTO O NÚMERO SECRETO !!!");
  
  
  
    
    
    
    
    
}
