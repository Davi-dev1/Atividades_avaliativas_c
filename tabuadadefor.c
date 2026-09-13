/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   //TODO : Solicite um número ao usuário e, utilizando o laço for, imprima a tabuada completa desse número (de 1 a 10). 
   
   
  int numero;
  int indice;
  
  
  printf("\n Digite um número: ");
   scanf("%i",&numero);
  
  
  
  for(int i= 1; i<=10; i++){
      indice = numero*i;
      printf("\n%i * %i = %i ",numero,i,indice);
      
      
  }
   
  
}
