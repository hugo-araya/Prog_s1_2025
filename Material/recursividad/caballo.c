#include <stdio.h>
#define N 5
#define ncuad N*N

void mover(int tablero[][N], int i, int pos_x, int pos_y, int *q);

const int ejex[8] = { -1,-2,-2,-1, 1, 2, 2, 1 }, 
          ejey[8] = { -2,-1, 1, 2, 2, 1,-1,-2 };

int main() {
    int tablero[N][N];
    int i, j, q;
    /* inicializa el tablero a cero */
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            tablero[i][j] = 0;

    /* pone el primer movimiento */
    tablero[3][3] = 1;
    mover(tablero, 2, 0, 0, &q);

    if (q) { /* hay solucion: la muestra. */
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++)
                printf("%3d ", tablero[i][j]);
            putchar('\n');
        }
    }
    else
        printf("\nNo existe solucion\n");
    return 0;
}

void mover(int tablero[][N],int i, int pos_x, int pos_y, int *q){
    int k, u, v;
    k = 0;
    *q = 0;
    do {
        u = pos_x + ejex[k]; 
        v = pos_y + ejey[k]; /* seleccionar candidato */
        if (u >= 0 && u < N && v >= 0 && v < N) { /* esta dentro de los limites? */
            if (tablero[u][v] == 0) { /* es valido? */
                tablero[u][v] = i; /* anota el candidato */
                if (i < ncuad) { /* llega al final del recorrido? */
                    mover(tablero, i+1, u, v, q);
                    if (!*q) tablero[u][v] = 0; /* borra el candidato */
                }
                else *q = 1; /* hay solucion */
            }
        }
        k++;
    } while (!*q && k < 8);
}