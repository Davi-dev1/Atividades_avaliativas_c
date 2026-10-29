/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>
int main()
{
int vetor[5] = {10,20,30,40,50};
int valorPesquisado;
bool entrada = false;

printf("\nDigite o valor que deseja pesquisar ");

scanf("%i",&valorPesquisado);



for(int i =0;i<5;i++){
    if(valorPesquisado == vetor[i]){
     printf("\nValor %i encontrado no indice %i ",vetor[i],i);   
     entrada = true;
    }
}
if(entrada == false){
    printf("\nO valor não foi encontrado");
}
}
