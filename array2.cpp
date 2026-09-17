#include <stdio.h>

int main(){

int tamanho;
	
	printf("Digite o tamanho do vetor : ");
    scanf("%i ",&tamanho);
    printf("\n%i\n",tamanho);
    
    int numeros[tamanho];
    
    for(int i = 0; i<tamanho;i++){
    	printf("Digite o próximo dado para a posição numeros[%i]",i);
    	scanf("%i",&numeros[i]);
	}
    printf("\nMostrando os valores inseridos no vetor ");
    for(int i =0; i<tamanho;i++){
    	printf("\n%i   ",numeros[i]);
	}
    
	
	
	}
