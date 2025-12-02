#include <stdio.h>
#define LIMITE 10

int main(){
    int i, k, p, temp, cont = 0, cont1 = 0;
    int limit = LIMITE - 1;
    int vector[LIMITE] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    //int vector[LIMITE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    //int vector[LIMITE] = {5, 6, 0, 3, 8, 2, 9, 1, 4, 7};

    for(k = 0; k < limit; k++) {
        p = k;
        for(i = k+1; i <= limit; i++){
            cont++;
            if(vector[i] < vector[p])
                p = i;
        }
        if(p != k) {
            cont1++;
            temp = vector[p];
            vector[p] = vector[k];
            vector[k] = temp;
        }
    }

    printf("Comparaciones: %d\n", cont);
    printf("Intercambios: %d\n", cont1);
/*
    for (i = 0; i < LIMITE; i++){
        printf("%d -", vector[i]);
    }
    printf("\n");
*/
    return 0;
}