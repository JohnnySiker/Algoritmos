#include <stdio.h>

void swap(char *a,char *b){
	char aux = *a;
	*a = *b;
	*b = aux;
}


int main(){
	
	char c1 = 'a';
	char c2 = 'b';

	printf("Caracter 1:%c Caracter 2:%c\n",c1,c2 );

	swap(&c1,&c2);
	printf("Caracter 1: %c\n Caracter 2:%c\n",c1,c2);

	return 0;
}


