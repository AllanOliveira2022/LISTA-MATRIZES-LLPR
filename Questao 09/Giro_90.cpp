#include <stdio.h>

int main(){
	int matriz[2][2] = {1,2,3,4};
	int matriz_nova[2][2];
	int ib=0, jb=0;
	printf("Matriz original : \n");
	
	for(int i=0; i < 2; i++){
		for(int j=0; j < 2; j++){
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}
	//transformando
	for(int j=0; j <= 1 ; j++){
		for(int i=1; i >= 0; i-- ){
			matriz_nova[ib][jb]= matriz[i][j];
			jb++;
		}
		jb=jb - jb;
		ib++;
	}
	printf("Nova matriz com giro de 90° : \n");
	for(int i=0; i < 2; i++){
		for(int j=0; j < 2; j++){
			printf(" %d ", matriz_nova[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
