#include <stdio.h>
#define LIMITE 10

int main(){
    int i, j, temp, cont = 0, cont1 = 0;
//    int vector[LIMITE] = {8, 1, 5, 10, 2, 3, 7, 4, 6, 9};
//    int vector[LIMITE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vector[LIMITE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // Rutina de ordenamiento
    for (i = 1; i < LIMITE; i++){
        for (j = 0 ; j < LIMITE - 1; j++){
            cont++;
            if (vector[j] > vector[j+1]) {
                cont1++;
                temp = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = temp;
            }
        }
    }
/*
    printf("Salida ordenada\n");
    for(i = 0; i < LIMITE; i++){
        printf("%d\n", vector[i]);
    }
*/
    printf("Comparaciones para %d elementos: %d\n", LIMITE, cont);
    printf("Intercambios para %d elementos: %d\n", LIMITE, cont1);
    return 0;
}