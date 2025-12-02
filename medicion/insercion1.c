#include <stdio.h>
#define LIMITE 13

int main(){
    int i, j, temp, cont = 0;
    int vector[LIMITE] = {8, 1, 5, 10, 2, 3, 7, 4, 6, 9, 11, 0, 13};
//    int vector[LIMITE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int vector[LIMITE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // Rutina de ordenamiento
    for (i = 1; i < LIMITE; i++) {
        temp = vector[i];
        j = i - 1;
        cont++;
        while ((vector[j] > temp) && (j >= 0)){
            vector[j + 1] = vector[j];
            j--;
        }
        vector[j + 1] = temp;
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