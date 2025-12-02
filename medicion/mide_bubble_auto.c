/****************************************************************
 * mide_bubble     :  mide el tiempo de ejecucion del algoritmo *
 *                    ordenamiento "bubble sort" o "burbuja"    *
 * Uso:                                                         *
 *      mide_bubble                                             *
 *      El programa pide la cantidad de datos que desea ordenar *                                                        *
 *                                                              *
 *      Usted debe cambiar el nombre del archivo de entrada     *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 25/11/2025                                            *
 *                                                              *
 * Proposito: Crear un archivo a partir de datos generados      *
 *            de mayor a menor.                                 *
 *                                                              *
 ****************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void lee_datos(int *array, int n);
void muestra_datos(int *array, int n);

int main(){
    time_t t_1,t_2;
    int array[1000000], N, i, j, aux;
//    printf("Cuantos datos: ");
//    scanf("%d", &N);
    FILE *sal;
    sal = fopen("salida_01_1.txt", "wt");
    lee_datos(array, 400000);
    for (N = 20000; N <= 300000; N = N + 10000){
 //       lee_datos(array, N);
//    muestra_datos(array, N);

        t_1=time(NULL);
        // Bloque a medir el tiempo
        for(i=0;i<N-1;i++){   
	        for(j=0;j<N-i-1;j++){ 
	            if(array[j+1]<array[j]){       
		        aux=array[j+1];       
		        array[j+1]=array[j];  
		        array[j]=aux;
	            }   
	        } 
        } 
        t_2=time(NULL);
        printf("N: %d\n", N);
        sal = fopen("salida_01_1.txt", "at");
        fprintf(sal,"\nEstadistica del programa: Ordenamiento Bubble Sort ");   
        fprintf(sal,"\nCantidad de datos = %d",N);
        fprintf(sal,"\nTiempo 1 = %ld",t_1);
        fprintf(sal,"\nTiempo 2 = %ld",t_2);
        fprintf(sal,"\nTiempo Total = %lf\n",difftime(t_2,t_1));
        fclose(sal);
     }
    return 0;
}

void lee_datos(int *array, int n){
    FILE *ent;
    int i;
    int dato;
    ent = fopen("datos_inversos.txt","r");
    for (i = 0; i < n; i++){
        fscanf(ent, "%d", &dato);
        array[i] = dato;
    }
    fclose(ent);
}

void muestra_datos(int *array, int n){
    int i;
    for (i= 0; i <n; i++){
        printf("%d\n", array[i]);
    }
}