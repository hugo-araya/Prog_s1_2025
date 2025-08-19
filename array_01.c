#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x,tabla[100];
    for (x=1;x<=100;x++){
        tabla[x] = x;
    }
    for (x=100;x >= 1;x--){
        printf("%d\n",tabla[x]);
    }    
    return 0;
}