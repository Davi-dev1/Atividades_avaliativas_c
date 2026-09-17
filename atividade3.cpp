#include <stdio.h>
int main()
{






int  tamanho;
int tamanho2;

printf("Digite o tamanho do primeiro vetor ");
scanf("%i",&tamanho);

int numeros[tamanho];

for(int i = 0;i<tamanho;i++){
	printf("Digite o próximo dado para a posição numeros[%i]",i);
	scanf("%i",&numeros[i]);
}

printf("Digite o tamanho do segundo vetor ");
scanf("%i",&tamanho2);
int numeros2[tamanho2];

for(int i = 0;i<tamanho2;i++){
	printf("Digite o próximo dado para a posição numeros[%i]",i);
	scanf("%i",&numeros2[i]);
}

for(int i =  0; i<tamanho;i++ ){
	int result = numeros[i]+numeros2[i];
	printf("\nSoma dos valores de cada posição dos vetores %i\n",result);
}











	
	
	
	

}
