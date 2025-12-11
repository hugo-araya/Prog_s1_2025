#include <stdio.h>
#include <stdlib.h>
#include<time.h>

#define MAXIMO 1000000
int cont = 0;

void swap(int *, int *);
int particion(int [], int, int);
void quickSort(int [], int, int);
void muestra_vector(int [], int);
void lee_datos(int *, int, char *);

int main(int argc, char *argv[]) {
    time_t t_1, t_2;
    int vector[MAXIMO];
    int LIMITE = atoi(argv[1]);
    lee_datos(vector, LIMITE, argv[2]);
    //muestra_vector(vector, LIMITE);
    
    t_1 = time(NULL);
    quickSort(vector, 0, LIMITE - 1);
    t_2 = time(NULL);

    //muestra_vector(vector, LIMITE);
    printf("\n\nEstadistica del programa: Ordenamiento .... ");   
    printf("\n\nTiempo 1 = %ld",t_1);
    printf("\n\nTiempo 2 = %ld",t_2);
    printf("\n\nTiempo Total = %lf\n",difftime(t_2, t_1));
    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* Esta funcion toma el ultimo elemento como pivote,
  coloca el pivote en su posición correcta en el arreglo ordenado,
  y coloca todos los elementos menores (menores que el pivote)
  a la izquierda del pivote y todos los elementos mayores a la 
  derecha del pivote */

int particion(int vector[], int ini, int fin) {
    int pivote = vector[fin];    // Pivote
    int i = (ini - 1);  // Indice del elemento mas pequeno

    for (int j = ini; j <= fin - 1; j++) {
        // Si el elemento actual es menor o igual que el pivote
        if (vector[j] <= pivote) {
            i++; // Incrementar indice del elemento mas pequeno
            swap(&vector[i], &vector[j]);
        }
    }
    swap(&vector[i + 1], &vector[fin]);
    return (i + 1);
}

/* La función principal que implementa Quicksort
 vector --> Arreglo a ser ordenado,
 ini  --> Indice de inicio,
 fin  --> Indice de fin */

void quickSort(int vector[], int ini, int fin) {
    printf("%d\n", cont++);
    if (ini < fin) {
        // pi es el indice de particion, vector[p] esta ahora en el lugar correcto
        int pi = particion(vector, ini, fin);

        // Se ordena recursivamente antes y despues de la particion
        quickSort(vector, ini, pi - 1);
        quickSort(vector, pi + 1, fin);
    }
}

// Función para imprimir el arreglo
void muestra_vector(int vector[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", vector[i]);
    printf("\n");
}

void lee_datos(int *vector, int n, char *nombre){
    int i;
    int dato;
    FILE *ent;
    ent = fopen(nombre, "r");
    for (i = 0; i < n; i++){
        fscanf(ent, "%d", &dato);
        vector[i] = dato;
    }
    fclose(ent);
}
