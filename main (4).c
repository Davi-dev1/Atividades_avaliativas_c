/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    //TODO:Escreva um programa que receba um número de 1 a 7 e imprima o dia da semana correspondente (1 Domingo, 2 = Segunda-feira, etc.). Trate o caso padrão (default) para entradas inválidas. 

int dia;


printf("Digite o dia da semana : ");
scanf("%i",&dia);

switch(dia){
    
    case 1:
    printf("Domingo");
    break;
    case 2:
    printf("Segunda-feira");
    break;
    case 3:
    printf("Terça-feira");
    break;
    case 4:
    printf("Quarta-feira");
    break;
    case 5:
    printf("Quinta-feira");
    break;
    case 6:
    printf("Sexta-feira");
    break;
    case 7:
    printf("Sabádo");
    break;
    default:
    printf("Opção Inválida");
    
    
    
}






}
