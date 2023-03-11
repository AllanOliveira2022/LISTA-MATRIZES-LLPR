#include <stdio.h>
#include <locale.h>

#define lin 3
#define col 3
int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	int matriz[lin][col]= {2, 0, 1,3, 4,-2,8, 9,6 };
	
	for(int i=0; i < lin; i++){
		for(int j=0; j < col; j++){
			if(i == j){
				matriz[i][j]= matriz[i][j];
			}else{
				matriz[i][j] = 0;
			}
		}
	}
	for(int i=0; i < lin; i++){
		for(int j=0; j < col; j++){
			printf(" %d ", matriz[i][j]);
		}
		printf("\n");
	}

		
		
	return 0;
}
