#include<stdio.h>
#include<locale.h>
#include <limits.h>
#define TAM 5
//equipe: Tiago Guimar�aes Ferreira, Murilo M�rcio, Adriano Mateus, Wagner Silva

 int main(){
 setlocale(LC_ALL,"");	
 //variavel
 
 int maiorNumero = INT_MIN, menorNumero = INT_MAX;
 int numero[TAM],pares=0,impares=0,positivo=0,negativo=0,quantidade=0;	
 int i;	
 float mediaImpar, mediaPar, somaPar =0, somaImpar = 0,mediaTotal,somaTotal = 0;
 
 
 	for(i=0;i<TAM;i++){
 	printf("Digite o %i� n�mero: ",i+1);
	 scanf("%i",&numero[i]);
	 somaTotal += numero[i];	
 		
 	if(numero[i] %2 == 0) {
 	
	 pares++;
	 somaPar+= numero[i];
 	}	
      else{
      	impares++;
      	somaImpar+= numero[i];
	  } 
	  if(numero[i] > 0){
	  	positivo++;
	  }
 		else if(numero[i] < 0){
 			negativo++;
		 }
		
		if(numero[i] > maiorNumero){
			maiorNumero = numero[i];
			
		}else if(numero[i] < menorNumero){
			menorNumero = numero[i];
		}
		 
		 
		 
 		
	 }
	 
	mediaPar = somaPar / pares;
	mediaImpar = somaImpar / impares;
	mediaTotal = somaTotal / 5;
	 
	printf("\n=== Exibindo dados === \n");
	printf("quantidades de n�meros pares:%i \n",pares);
	printf("quantidades de n�meros impares:%i \n",impares);
	printf(" Maior n�mero: %i \n",maiorNumero);
	printf(" Menor n�mero: %i \n",menorNumero);
	printf("quantidades de n�meros positivos: %i \n",positivo);
	printf("quantidades de n�meros negativos: %i \n",negativo);
	printf("Quantidade de n�meros inseridos: %i \n",numero[TAM]);
	printf("Media Pares:  %.1f\n", mediaPar);
 	printf("M�dia impares:  %.1f\n", mediaImpar);
 	printf("Media Total: %.1f\n", mediaTotal);
 	
 	printf("N�meros Digitados na ordem Inversa: \n");
	 for(i= TAM - 1;i >= 0 ;i--){
 		printf("%i ", numero[i]);
	 }
 	
 	
 }
