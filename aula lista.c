#include<stdio.h>
#include<locale.h>
int main{

setlocale(LC_ALL,"");
int i,numero,soma=0;
//solicitando dados para o usuário
for (i=1;i<= 5;i++){
printf("digite o %i número:",i);
scanf("%i", &numero);
soma=soma +numero;




	
}

printf("Soma:%i\n";soma);
return 0;

}
