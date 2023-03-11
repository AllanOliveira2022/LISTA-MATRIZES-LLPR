#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2

	int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
	  	int matrizA[LIN][COL]={{1, 2}, {3, 4}};
	  	int matrizY[LIN][COL]={{-1, 0}, {0, 1}};
	  	int R[COL][LIN]={{0,0},{0.0}};;
	  
	  	//matriz original * matriz de reflexão
	  	for(int i=0; i < LIN; i++){
	    	for(int j=0; j<COL; j++){
	      		for(int k=0; k<COL; k++){	
	        		R[i][j] += matrizA[i][k] * matrizY[k][j];
					}
				}
			}
		printf("Matriz refletida é:\n");
		for(int i=0; i<LIN; i++){
			for(int j=0; j<COL; j++){
		      printf("| %2d |", R[i][j]);
		    }
		    printf("\n");
		  }
		  return 0;
		}
