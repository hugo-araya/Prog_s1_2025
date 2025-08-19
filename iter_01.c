#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000

void inicializar(int *, int);
void procesar(int *, int, int, int *);
void mostrar(int *, int);

int main(int arcg, char *argv[]){
    int primos[MAX], c_p, ini, fin;
    ini = atoi(argv[1]);
    fin = atoi(argv[2]);
    inicializar(primos, fin);
    procesar(primos, ini, fin, &c_p); // debe retornar de alguna forma el arreglo con los numeros primos
    mostrar(primos, c_p);
    return 0;
}

void inicializar(int *n, int cant){
    int i;
    for(i = 0; i < cant; i++){
        *n = 0;
        n++;
    }
}

void procesar(int n[], int ini, int fin, int *g){
    int i, d, es, pos = 0;
    for(i = 1; i <= fin; i++){
        es = 1;
        for (d = 2; d < i; d++){
            if (i % d == 0){
                es = 0;
            }
        }
        if (es != 0){
            n[pos] = i;
            pos++;
        }
    }   
    *g = pos; 
}

void mostrar(int n[], int cant){
    int i;
    for(i = 1; i < cant; i++){
        printf("%d : %d\n", i, n[i]);
    }  
}