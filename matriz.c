#include <stdio.h>

void funcion(int *, int, int);

int main(){
    int matriz[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int filas = 3;
    int columnas = 3;
    funcion(&matriz[0][0],filas, columnas);
    return 0;
}

void funcion(int *mat, int fil, int col){
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j ++){
            printf("%d ", *(mat + i * col + j));
        }
        printf("\n");
    }
}