#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2

	int main() {
    	// Definindo a matriz A
    	int matrizA[LIN][COL] = {{1, 2}, {3, 4}};
    	int Cofatora[LIN][COL];
    	
    	// Calculando a matriz cofatora de A
    	for (int i = 0; i < LIN; i++) {
        	for (int j = 0; j < COL; j++) {
           	 Cofatora[i][j] = matrizA[(i+1)%2][(j+1)%2];
           	 if ((i+j)%2 == 1) {
                Cofatora[i][j] = -Cofatora[i][j];
            }
        }
    }
    
   	 	// Imprimindo a matriz cofatora de A
		printf("Cofatora: \n");
    	for (int i = 0; i < LIN; i++) {
        	for (int j = 0; j < COL; j++) {
            	printf("| %2d | ", Cofatora[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
