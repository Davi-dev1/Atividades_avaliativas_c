#include <stdio.h>

void soma(){
	int a,b;
	
	printf("\nDigite o primeiro valor : ");
	scanf("%i",&a);
	printf("\nDigite o segundo valor : ");
	scanf("%i",&b);
      a+=b;
	printf("\nO valor da soma eh %i\n",a);
}

void subtracao(){
	int a,b;
	
	printf("\nDigite o primeiro valor : ");
	scanf("%i",&a);
	printf("\nDigite o segundo valor : ");
	scanf("%i",&b);
	 a-=b;
	printf("\nO valor da subtracao eh %i\n",a);
}
void multiplicacao(){
	int a,b;
	
	printf("\nDigite o primeiro valor : ");
	scanf("%i",&a);
	printf("\nDigite o segundo valor : ");
	scanf("%i",&b);
	 a*=b;
	printf("\nO valor da multiplicação eh %i\n",a);
}


void divisao(){
	int a,b;
	
	printf("\nDigite o primeiro valor : ");
	scanf("%i",&a);
	printf("\nDigite o segundo valor : ");
	scanf("%i",&b);
	 a/=b;
	printf("\nO valor da divisao eh %i\n",a);
}


int main(){



int opcao;



	
do{

printf("Calculadora :");
printf("\n\nEscolha a opção abaixo");
printf("\n\n1 - Soma");
printf("\n\n2 - Subtração");
printf("\n\n3 - Multiplicação");
printf("\n\n4 - Divisão");
printf("\n\n5 - Sair\n");
scanf("%i",&opcao);


switch(opcao){
case 1:
soma();

break;
case 2:
subtracao();
break;
case 3:
multiplicacao();
break;
case 4:
divisao();
break;
case 5:
printf("\nFinalizando o Sistema......");
break;
default:
printf("\nOpção Inválida");
}
}while(opcao != 5);
}
