#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int matriz[3][2] = {1,2,3,4,5,6};
	int matriz_nova[2][3];
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 2; j++){
			printf("Digite: ");
			
		}	
	}
	// normal
	printf("Normal \n");
	for(int i=0; i < 3; i++){
		for(int j=0; j < 2; j++){
			printf(" %d ", matriz[i][j]);	
		}
		printf("\n");	
	}
	
	// transposta
	for(int i=0; i < 2; i++){
		for(int j=0; j < 3; j++){
			matriz_nova[i][j] = matriz[j][i];	
		}
	}
	
	printf("Transposta \n");
	for(int i=0; i < 2; i++){
		for(int j=0; j < 3; j++){
			printf(" %d ", matriz_nova[i][j]);	
		}
		printf("\n");	
	}
	
		return 0;
}
	

