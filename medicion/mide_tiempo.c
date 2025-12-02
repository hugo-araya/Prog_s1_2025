/****************************************************************
 * mide_tiempo    :    Progra que sirve de plantilla para       *
 *                     la medicion de tiempo de ejecucion       *
 * Uso:                                                         *
 *      mide_tiempo                                             *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 25/11/2025                                            *
 *                                                              *
 * Proposito: Crear un archivo a partir de datos generados      *
 *            de mayor a menor.                                 *
 *                                                              *
 ****************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAXIMO 1000000
void lee_datos(int *array, int n);
void muestra_datos(int *array, int n);

int main(){
    time_t t_1, t_2;
    int vector[MAXIMO];
    int  N, i, j, aux, k, v, cont;

    N = 999999;
    lee_datos(vector, N);
//    printf("\nIniciales\n");
//    muestra_datos(vector, N);

    t_1=time(NULL);

    // Bloque a medir el tiempo
    // Rutina de ordenamiento
    k = N / 2;
    while (k >= 1){
        for (i = k; i < N; i++){
            v = vector[i];
            j = i - k;
            cont++;
            while (j >= 0 && vector[j] > v){
                vector[j + k] = vector[j];
                j = j - k;
            }
            vector[j + k] = v;
        }
        k = k/2;
    }

    t_2=time(NULL);
//    printf("\nOrdenados\n");
//    muestra_datos(vector), N);

    printf("\n\nEstadistica del programa: Ordenamiento con %d datos ", N);   
    printf("\n\nTiempo 1 = %ld",t_1);
    printf("\n\nTiempo 2 = %ld",t_2);
    printf("\n\nTiempo Total = %lf\n",difftime(t_2, t_1));
    return 0;
}

void lee_datos(int *array, int n){
    int i;
    int dato;
    for (i = 0; i < n; i++){
        scanf("%d", &dato);
        array[i] = dato;
    }
}

void muestra_datos(int *array, int n){
    int i;
    for (i= 0; i <n; i++){
        printf("%d\n", array[i]);
    }
}