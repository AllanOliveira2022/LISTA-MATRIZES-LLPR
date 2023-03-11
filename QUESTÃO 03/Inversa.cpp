#include <stdio.h>
#include <locale.h>

#define lin 2
#define col 2
int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	float matriz[lin][col]= {1,2,3,4};
	int det,dp=1,ds=1;
	int inversa[lin][col];
	
	
	for(int i=0; i < lin; i++){
		for(int j=0; j < col; j++){
			if(i == j){
				dp*= matriz[i][j];
			}
			if(j == (col-1)-i){
				ds*= matriz[i][j];
			}
		}
	}
	det = dp - ds;
	for(int i=0; i < lin; i++){
		for(int j=0; j < col; j++){
			matriz[i][j]= matriz[i][j] / det;
		}
	}
	for(int i=0; i < lin; i++){
		for(int j=0; j < col; j++){
			printf(" %.1f ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("O determinante da matriz é : %d", det);
		
		
	return 0;
}
