#include <stdio.h>

int main(){

	char matriz[5][5];

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			matriz[i][j] = 'a';
		}
	}

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			printf("%c ",matriz[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 5; ++j){
			printf("%x |",&matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}