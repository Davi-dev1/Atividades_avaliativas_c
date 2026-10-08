#include <stdio.h>

int main(){
	
	float nota;
	
	printf("Classificação de notas ");
	printf("\nDigite uma nota : ");
	scanf("%f",&nota);
	if(nota >= 7.0){
		printf("\nAprovado");
	}else if(nota >= 5.0 && nota <= 6.9){
		printf("\nEm Recuperação ");
		
	}else{
		printf("\nReprovado");
	}
	
	
	
}
