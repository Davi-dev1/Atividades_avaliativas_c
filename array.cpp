#include <stdio.h>

int main(){
	int temperatura[7];
	
	temperatura[0]=15;
	temperatura[1]=21;
	temperatura[2]=22;
	temperatura[3] = 18;
	temperatura[4]=25;
	temperatura[5]=26;
	temperatura[6]=29;
	
	
	int tamanho = 7;
	
	
	for(int i = 0; i<tamanho;i++){
		printf("Temperatura da semana : %i\n",temperatura[i]," °C");
	} 
}
