/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main() {


	int numero;
    int numero2 = 2;
    
    
	printf("\n Digite um numero : ");
	scanf("%i", &numero);
	printf("\n O número é  %i\n",numero);
	
	
	
	if( numero % numero2 == 0   ){
	    printf( "O número %i  é par  ",numero);
	}else{
	    printf("O número %i  é impar  ",numero);
	}
	





}
