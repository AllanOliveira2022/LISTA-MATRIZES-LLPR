#include <locale.h>
#include <math.h>
#define LIN 3
#define COL 3

	int main() {
    	int matriz[LIN][COL] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    	int adj[LIN][COL];
    	int temp[LIN][COL];

    	for(int i = 0; i < LIN; i++){
        	for(int j = 0; j < COL; j++){
            	temp[i][j] = pow(-1, i+j) * (matriz[(i+1)%3][(j+2)%3] * matriz[(i+2)%3][(j+1)%3] - 
				matriz[(i+1)%3][(j+1)%3] * matriz[(i+2)%3][(j+2)%3]);
				}
			}
		for(int i = 0; i < LIN; i++){
        	for(int j = 0; j < COL; j++){
            	adj[j][i] = temp[i][j];
				}
			}

    	for(int i = 0; i < LIN; i++){
        	for(int j = 0; j < COL; j++){
            	printf("| %2d | ", adj[i][j]);
				}
        printf("\n");
		}
		return 0;
	}
	
