#include <stdio.h>

int main(void){
    int x, cont, z, i, tabla[100];
    i = 0;
    for (x = 1; x <= 100; x++){
        cont = 0;
        for (z = 1; z <= x; z++){
            if (x%z == 0){
               cont++;
            }
        }
        if (cont == 2 || z == 1 || z == 0){
            tabla[i] = x;
            i++;
        }
    }
    for (x = 0; x < i; x++){
        printf("%d\n", tabla[x]);
    }   
    return 0;
}
