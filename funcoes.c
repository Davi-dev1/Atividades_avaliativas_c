 #include <stdio.h>
 
 void mensagem(){
 	printf("\nNÃO AGUENTO MAIS A CHUVA E O FRIO !!!!");
 }
 
 void soma(int valor1,int valor2){
 	int result = valor1+valor2;
 	printf("\nA SOMA DE %i E %i eh igual a %i",valor1,valor2,result);
 //void significa vazio, executa o que precisa executar e não retorna mais nada
 }
 
 int temperatura(){
 	return 16; // return devolve um numero inteiro 16 lá na função que o chamou
 }
 
 float media(float nota1,float nota2,float nota3,float nota4){
 	float notaFinal =( nota1+nota2+nota3+nota4)/4;
   return notaFinal;
 }
 
 
 
 int main(){
 	//Chamada da Funçõo sem parametro(s) e sem retorno
 	mensagem();
 	
 	
 	
 	//Chamada da Funçõo com parametro(s) e sem retorno
 	 soma(10,5);//explicitamos o valor aqui por isso que a função é void 
 
 
 	
 	//Chamada da Funçõo sem parametro(s) e com retorno(devolver algo para quem chamou)
 int recebeuTemperatura = 	temperatura();
 printf("\nTemperatura recebida : %i °c", recebeuTemperatura);	
 	
 	
 	
 	
 	//Chamada da Funçõo com parametro(s) e com retorno
 	float resultado = media(8.5,10,4.5,8);
 	printf("\nA média das notas eh : %.1f",resultado);
 	
 	
 	
 	
 }
