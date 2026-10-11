#include <stdio.h>


int main(){


int n[10];



for(int i=0;i<10;i++){
	
printf("Digite o valor %i : \n",i+1);
scanf("%i",&n[i]); // guarda esse cara dentro do array na posição atual
}

int media;
int maior = n[0];
int menor = n[0];
//printf("\nVoce digitou : \n");
for (int i=1;i<10;i++){
	if(n[i] > maior){
		maior = n[i];
		// se qualquer valor do array for maior  que o valor incial(0) que carregamos na linha 18, então ele assume a variavel maior;
	}
	
}
printf("\n O maior valor e : %i\n",maior);

for(int i = 1;i<10;i++){
	
	if(n[i] < menor){
		menor = n[i];
	// se qualquer valor do array for menor que o valor incial(0) que carregamos na linha 16, então ele assume a variavel menor;
}
}
printf("\n O menor valor e : %i\n",menor);




int soma = 0;

for(int i = 0;i<10;i++){
soma += n[i]; 
 // o resultado da soma aqui nn fica preso dentro do for ele fica guardado dentro da variável soma que tá fora 
}
media = soma /10;
printf("\n A média é %i",media);



}