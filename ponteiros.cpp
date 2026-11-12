#include <stdio.h>


void enviarValor(int valor){
		printf("\n Endereco memória(enviarValor): %p ",&valor);
    printf("\nValor da variavel(enviarValor) : %i",valor);
}


int main(){
	int valor = 10;
	enviarValor(valor);
	
	printf("\n Endereco memória(main)): %p ",&valor);
    printf("\nValor da variavel(main)) : %i",valor);

}
