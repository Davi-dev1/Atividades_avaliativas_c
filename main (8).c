/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 //TODO : Faça um programa que solicite uma senha ao usuário. Enquanto a senha digitada for incorreta (ex: diferente de "1234"), continue solicitando a senha e exibindo uma mensagem de alerta. 

    
    int senha = 666;
    int tentativas=0;
    int senhadousuario;
    
    printf("\nDigite a senha\n");
    scanf("%i",&senhadousuario);
    while(senhadousuario != senha){
        printf("\nSenha errada. Tente novamente");
        printf("\n Digite a senha\n");
        scanf("%i",&senhadousuario);
        tentativas++;
        
    }
    printf("Senha correta, acesso liberado !");
    
}
