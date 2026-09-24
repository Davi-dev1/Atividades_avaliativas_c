#include <stdio.h>


float celsiusParaFahrenheit(float n1){
	
    float f = (n1 *1.8)+32;
	return f;	
}


int main(){
	
	float n1;
	printf("Coloque a temperatura em celsius abaixo ");
	scanf("%f",&n1);
	float resultado = celsiusParaFahrenheit(n1);
	printf("A temperatura e %1.f",resultado); 

	
		
	      
	
	
}
