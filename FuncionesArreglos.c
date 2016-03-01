#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTAL 5

void llenarArreglo(int *ap, int N);
void imprimeEnteros(int *ap,int N);
int enteroMayor(int *ap, int N);
int enteroMenor(int *ap, int N);
int sumatoria(int *ap, int N);


int main(){
	srand(time(NULL));
	int *arr,tmp;
	arr = malloc(TOTAL*sizeof(int));

	if (arr != NULL){
		llenarArreglo(arr, TOTAL);
		tmp = enteroMayor(arr,TOTAL);
		printf("Mayor: %d\n",tmp);
		tmp = enteroMenor(arr,TOTAL);
		printf("Menor: %d\n",tmp);
		tmp = sumatoria(arr,TOTAL);
		printf("Sumatoria: %d\n",tmp);
		imprimeEnteros(arr,TOTAL);
	}
	free(arr);

	return 0;
}

void llenarArreglo(int *ap, int N){
	for (int i = 0; i < N; ++i){
		*(ap+i) = rand()%100;
	}
}

void imprimeEnteros(int *ap,int N){
	for (int i = 0; i < N; ++i){
		printf("%d\n", ap[i]);
	}
}

int sumatoria(int *ap, int N){
	int suma = 0;
	for (int i = 0; i < N; ++i){
		suma+= *(ap+i);
	}

	return suma;
}
int enteroMayor(int *ap, int N){
	int max = *ap;
	for (int i = 1; i < N; ++i){
		if (max < *(ap+i)){
			max = *(ap+i);
		}
	}
	return max;
}

int enteroMenor(int *ap, int N){
	int min = *ap;
	for (int i = 1; i < N; ++i){
		if (min >  *(ap+i)){
			min = *(ap+i);
		}
	}
	return min;
}











