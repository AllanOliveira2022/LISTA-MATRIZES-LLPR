#include <stdio.h>

int main(){
    int matriz[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2] = {{5, 6}, {7, 8}};
    int c[2][2] = {{0, 0}, {0, 0}};
    

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++){
                c[i][j] = c[i][j] + matriz[i][k] * matriz2[k][j];           
			}
        }
    }
    
    printf("Matriz multiplicada:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
