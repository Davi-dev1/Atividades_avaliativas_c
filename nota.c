/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    float nota;
    
    
    //Receba a nota de um aluno (0 a 10) e informe a situação acadêmica: 
// • 
// Nota > 7.0: "Aprovado" 
// • Nota entre 5.0 e 6.9: "Recuperação" 
// • Nota < 5.0: "Reprovado" 

    
    printf("Classificação de Notas");
    printf("\nDigite uma nota : ");
    scanf("%f", &nota);
    if(nota >= 7.0){
        printf("Aprovado");
    }else if(nota >= 5.0 && nota <=6.9){
        printf("Recuperação");
    }else{
        printf(" REPROVADO");
    }
    
    
    
    
    
    
    
}
