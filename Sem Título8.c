#include<stdio.h>
#include<locale.h>
int main(){
	
setlocale(LC_ALL,"");
float media,notas,soma;
int i;	
	//dados
for(i=1; i<=4 ; i++) {
 printf("digite a %i� nota:",i);
 scanf("%f",&notas);
 soma=  soma + notas;



}	
	media = soma/4;
	printf("\n === exibindo resultados === \n");
	printf("M�dia %.1f \n",media);
	return 0;
	
	
}
