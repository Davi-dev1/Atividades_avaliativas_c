/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int soma(){
    int n1;
    int n2;
    printf("\n\nDigite o primeiro número: ");
    scanf("%i",&n1);
    printf("\n\nDigite o Segundo número : ");
   scanf("%i",&n2);
  n1 += n2;
  printf("Valor da soma é : %i",n1);
return n1;  // se fosse void nn retornaria valor e nn seria armazenado o valor de n1 dentro do int  resultado.
}


int retorno(int resultado){

    printf("\nO valor retornado da soma dos números é : %i",resultado);
}


int main()
{
   int resultado = soma(); //precisamos guardar o valor da variavel n1 da funçaõ senão vai ficar no ar...
   
   retorno(resultado);// armazena esse valor dentro do parametro da função retorno e no retorno chama ela no parametro e na saida
   
   /////Void usamos quando queremos apenas imprimir algo na tela e nada mais, ele pode somar subtrair e fazer qualquer operação porém nn retorna valor, agora se precisamos utilizar o valor de uma função em outra função ai a função tem que ser do tipo inteiro e tem que retorar valor 
}
