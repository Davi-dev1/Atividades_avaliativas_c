#include <stdio.h>

int main(){

int tamanho;
	
	printf("Digite o tamanho do vetor : ");
    scanf("%i ",&tamanho);
    
    int numeros[tamanho];
    
    for(int i = 0; i<tamanho;i++){
    	printf("Digite o próximo dado para a posição numeros[%i]",i);
    	scanf("%i",&numeros[i]);
	}
    
    
	
	
	}
