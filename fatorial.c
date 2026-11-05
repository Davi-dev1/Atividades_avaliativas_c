#include <stdio.h>


int fatorial(int n){
if(n <= 1){
    return 1;
}



return n*fatorial(n-1);

}


int main()
{
 int numero;
 int resultado;

 printf("Digite o número");
 scanf("%d",&numero);

 resultado = fatorial(numero); //chamada a função do fatorial

 printf("\n O fatorial de %i é : %i\n",numero,resultado);
}
