#include <stdio.h>

void funcion(int [][3], int, int);

int main(){
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int filas = 3;
    int columnas = 3;
    funcion(matriz, filas, columnas);
    return 0;
}

void funcion(int mat[][3], int fil, int col){
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j ++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}