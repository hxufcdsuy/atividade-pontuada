#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	printf("\n tabuada de 5:\n");
	for ( i = 1; i <= 10;i++){printf(" i% x %i = %i\n",5,i,i*5);
	}
	
	return 0;
}
