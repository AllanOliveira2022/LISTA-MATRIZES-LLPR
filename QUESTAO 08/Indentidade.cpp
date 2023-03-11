#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
		int matriz[LIN][COL]={{1,2},{3,4}};
		int matriz_id[LIN][COL];
		
		printf("\tMatriz Original: \n");
		for(int i=0; i<LIN; i++){
	    	for(int j=0; j<COL; j++){
	      		printf("| %d |", matriz[i][j]);
				  }
				  printf("\n");
				}
	  
	  	for(int i=0; i<LIN; i++){
	    	for(int j=0; j<COL; j++){
	      		matriz_id[i][j] = 0;
				  }
				}
	  
	  	for(int i=0; i<LIN; i++){
	    	matriz_id[i][i] = 1;
			}

	  	printf("\tMatriz identidade:\n");
	  	for(int i=0; i<LIN; i++){
	    	for(int j=0; j<COL; j++){
	      		printf("| %d |", matriz_id[i][j]);
	    }
	    printf("\n");
	  }
	  return 0;
	}
