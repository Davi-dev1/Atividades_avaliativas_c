/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdbool.h>

//TODO : Crie um programa que determine se uma pessoa pode entrar em uma atração de parque de diversões. As regras requerem idade maior ou igual a 12 anos E altura maior ou igual a 1.40m. Exiba um resultado booleano (true ou false).


int main()
{
   
 int idade;
 float altura;
 bool entrada;
 char anos[50] = "anos";
   
   printf("\nDigite sua idade: ");
   scanf("%i",&idade);//& é sempre aqui no scanf
   printf("A idade informada é : %i",idade , anos);
   
   
   printf("\nDigite sua altura: ");
   scanf("%f",&altura);//& é sempre aqui no scanf
   printf("A altura  informada é : %.2f",altura);
   
   if(idade >= 12 && altura >= 1.40 ){
       
       printf("\ntrue, Acesso permitido");
   }else{
       
       printf( "\n false Acesso negado" );
   }
   
   
   return 0;
   
   
    
}
