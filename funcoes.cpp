#include <stdio.h>






int main(){
	
int valor = 10;
int valor1= 15;
int valor2 = 20;//guarda o valor

int *p = &valor; // guarda o endereço da memória 

printf("\nEndereco de memoria : %p",&valor);

//	o & é o edereço de memória ele é o ponteiro onde o sistema operacional guarda a variavel.
// o %p mostra  endereço literal	
	printf("\n Valor que está dentro do endereço: %i",*p);
}
