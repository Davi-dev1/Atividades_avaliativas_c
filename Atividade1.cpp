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
    char resposta;
    
    printf("Digite seu nome ");
    scanf("%s",nome);
    printf("\nO nome é : %s", &nome);
    
    printf("\nDigite sua idade : ");
    
    scanf("%i",&idade);
    
    printf("\nA idade é : %i", idade);
    
    
    
    printf("\nDigite a sua altura");
    scanf("%f",&altura);
    
    printf( " A altura é : %.2f", altura);
    
    
    printf("Voce tem cnh ?");
    scanf( " %s",&resposta);
    if(resposta == 'S'|| resposta =='s'){
        CNH = true;
        printf(" TRUE");
    }else if(resposta =='N'||resposta =='n'){
        CNH = false;
        printf("false");
    }else{
        printf("Entrada inválida");
    }
    
    printf("\nMostrando todos os dados : %s,%i,%.2f " ,&nome,idade,altura,CNH);
    
  
    // char nome[50] = "Ana";
    // int idade =25 ;
    // float altura =1.68 ;
    // bool CNH = true;  
    
    // printf("\n nome : %s : ",&nome);
    //  printf("\n idade : %i : ",idade);
    //   printf("\n Altura : %.2f : ",&nome);
    
    
    
    
    
}
