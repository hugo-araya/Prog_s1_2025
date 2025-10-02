#include <stdio.h>
#include <string.h>

typedef struct fecha {
    int dia;
    int mes;
    int anio;
    int dia_del_anio;
    char nombre_mes[12];
} FECHA;

FECHA funcion(FECHA);

int main(){
    FECHA hoy = {30, 9, 2025, 273, "Septiembre"};
    FECHA ayer;
    printf("Dia: %d\n", hoy.dia);
    printf("Mes: %d\n", hoy.mes);   
    printf("Anio: %d\n", hoy.anio);
    printf("Dia del año: %d\n", hoy.dia_del_anio); 
    printf("Nombre del mes: %s\n", hoy.nombre_mes);
    ayer = funcion(hoy);
    printf("---------------------------------\n");
    printf("Dia ayer: %d\n", ayer.dia);
    printf("Mes: %d\n", ayer.mes);   
    printf("Anio: %d\n", ayer.anio);
    printf("Dia del año: %d\n", ayer.dia_del_anio); 
    printf("Nombre del mes: %s\n", ayer.nombre_mes);    
    return 0;
}

FECHA funcion(FECHA f){
    FECHA g;
    g.dia = f.dia - 1;
    g.mes = f.mes;
    g.anio= f.anio;
    g.dia_del_anio = f.dia_del_anio - 1;
    strcpy(g.nombre_mes, f.nombre_mes);
    return g;
}