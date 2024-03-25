#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
	int i,numero,pares=0, impares=0;
	
	//solicitando dados
	for (i =1;i <= 5;i++){
	printf("Digite %iº numero:",i);
	scanf("%i",&numero);
	if (numero % 2 == 0) {
	 pares = pares++;}	else{
	 impares++;}	
		
		
	}
	
printf("\n === exibindo resultados ==");
printf("pares:%i \n",pares);
printf("impares:%i",impares);

return 0;
	
	
	
    
	
	
}
