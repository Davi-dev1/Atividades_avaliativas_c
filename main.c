/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

// TODO: Escreva um programa que receba o preço unitário de um produto e a quantidade comprada. Calcule o valor total da compra. Em seguida, receba o valor pago pelo cliente e calcule o troco a ser devolvido. 

#include <stdio.h>

int main()

{
    
float preco_unitario;
int quantidade;
float valorTotal;
float valorPago;
float troco;


printf("\nDigite o preço unitário da compra :");
scanf("%f",&preco_unitario);
printf("\nO valor é : %.2f" ,preco_unitario);

printf("\nDigite a quantidade de produtos  da compra :");
scanf("%i",&quantidade);
printf("\nA quantidade de produtos é : %i",quantidade);

valorTotal  = quantidade*preco_unitario;
printf("O valor Total da compra é : %.2f",valorTotal);

printf("\n Digite o valor que voce vai pagar: ");
scanf("%f",&valorPago);


troco = valorPago - valorTotal;
printf("O valor Total do Troco é : %.2f" ,troco);



}
