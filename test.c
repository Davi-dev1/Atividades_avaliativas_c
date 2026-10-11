#include <stdio.h>
int main(){

float n[10];
float tamanho=10;

for(int i = 0; i<10;i++){
printf("\nDigite o  valor %i aqui : \n", i+1);
scanf("%f",&n[i]);

}
for(int i=0; i<tamanho;i++){
printf("\nOs número digitado foi :%f",n[i]);
}
float media;
float soma = 0;
float maior = n[0];
float menor = n[0];


for(int i = 0; i<10;i++){
    if(n[i] > maior){
    maior = n[i];
    }
}
printf("\nO valor maior é : %f ",maior);


for(int i = 0; i<10; i++){
if(n[i]<menor){
    menor = n[i];
}

}
printf("\nO menor valor é : %f",menor);


for(int i = 0;i<10;i++){
soma += n[i];
}
media = soma/10;
printf("\n A média dos valores informados é : %.2f",media);


}