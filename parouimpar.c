#include <stdio.h>


int parouimpar(){
	int entrada;
	int numero2 = 2;
	printf("\nDigite um número : ");
	scanf("%i",&entrada);
	if(entrada % numero2 == 0 ){
		printf("O número %i é par ",entrada);
		
	}else{
		printf("O número %i é impar ",entrada);
	}
	
	return entrada;
}


int main(){
	
	int parOuImpar = parouimpar();
	printf(" %i ",parOuImpar);
	
	
	
}
