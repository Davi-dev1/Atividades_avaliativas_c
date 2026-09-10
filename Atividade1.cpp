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
    char nome[50];
    int idade;
    float altura;
    bool CNH = false;    
    
    printf("Digite seu nome ");
    scanf("%s",nome);
    printf("\nO nome é : %s", &nome);
    
    printf("\nDigite sua idade : ");
    
    scanf("%i",&idade);
    
    printf("\nA idade é : %i", idade);
    
    
    
    printf("\nDigite a sua altura");
    scanf("%f",&altura);
    
    printf( " A altura é : %.2f", altura);
    
    if(idade >=18){
        CNH = true;
        printf(" voce tem idade suficiente para tirar a CNH ");
    }else{
        printf("Voce não tem idade");
    }
    
    
  
    
    
    
    
}
