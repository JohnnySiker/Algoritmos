#include <stdio.h>

void sumarAsignar(int *a, int b){
	*a += b;
}

void restarAsignar(int *a, int b){
	*a -= b;
}

void multiplicarAsignar(int *a, int b){
	*a *= b;
}

void dividirAsignar(int *a, int b){
	*a /= b;
}

void mostrarMenu(){
	printf("\nOperacion a realizar\n");
	printf("1.Sumar\n");
	printf("2.Restar\n");
	printf("3.Multiplicar\n");
	printf("4.Dividir\n");
	printf("5.Salir\n");
}

int main(){
	int a,b,opcion;

	do{
		

		mostrarMenu();
		scanf("%d",&opcion);
		if (opcion != 5){
			printf("Ingresa el valor de a:\n");
			scanf("%d",&a);
			printf("Ingresa el valor de b:\n");
			scanf("%d",&b);
		
			switch(opcion){
				case 1:
					sumarAsignar(&a,b);
					break;
				case 2:
					restarAsignar(&a,b);
					break;
				case 3:
					multiplicarAsignar(&a,b);
					break;
				case 4:
					dividirAsignar(&a,b);
					break;
			}
			printf("Valor de a:%d  b:%d\n",a,b);
		}
	}while(opcion != 5);

	return 0;
}