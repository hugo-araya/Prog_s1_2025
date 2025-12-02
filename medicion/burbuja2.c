#include <stdio.h>
#define LIMITE 13

int main(){
    int i, j, temp, cont = 0;
    int vector[LIMITE] = {8, 1, 5, 10, 2, 3, 7, 4, 6, 9, 11, 12, 13};

    // Rutina de ordenamiento
    for(i = 0; i < LIMITE; i++) {
        for(j = 0; j < i; j++) {
            cont++;
            if(vector[i] < vector[j]) {
                temp = vector[j];
                vector[j] = vector[i];
                vector[i] = temp;
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
    return 0;
}