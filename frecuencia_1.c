// Autor: Hugo Araya Carrasco

#include<stdio.h>
#include<string.h>

void muestra_linea(char []);
void inicializa(int [], int);
void muestra_frec(int [], int);
void analisis(char [], int [], int);

int main(){
    char linea[50];
    int frec[255];
    printf("Texto: ");
    fgets(linea, sizeof(linea), stdin);
    inicializa(frec, 256);
    analisis(linea, frec, 256);
    muestra_frec(frec, 255);
    return 0;
}

void muestra_linea(char linea[]){
    printf("%s\n", linea);
}

void inicializa(int frec[], int cant){
    for (int i = 0; i < cant; i++){
        frec[i] = 0;
    }
}

void muestra_frec(int frec[], int cant){
    for (int i = 0; i < cant; i++){
        printf("%d - %d\n", i, frec[i]);
    }
}

void analisis(char linea[], int frec[], int cant){
    int tam;
    tam = strlen(linea);
    for (int i = 0; i < tam; i++){
        frec[linea[i]] = frec[linea[i]]+1;
    }
}