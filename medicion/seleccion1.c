#include <stdio.h>
#define LIMITE 10

int main(){
    int i, j, k, p, temp, cont = 0;
    int limit = LIMITE-1;
//    int vector[LIMITE] = {8, 1, 5, 10, 2, 3, 7, 4, 6, 9};
//    int vector[LIMITE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vector[LIMITE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // Rutina de ordenamiento

    for(k = 0; k < limit; k++) {
        p = k;
        for(i = k+1; i <= limit; i++){
            cont++;
            if(vector[i] < vector[p]){
                p = i;
            }
        }
        if(p != k) {
            temp = vector[p];
            vector[p] = vector[k];
            vector[k] = temp;
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