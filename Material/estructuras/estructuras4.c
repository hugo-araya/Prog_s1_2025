#include <stdio.h>

typedef struct fecha {
    int dia;
    int mes;
    int anio;
    int dia_del_anio;
    char nombre_mes[12];
} FECHA;

int main(){
    FECHA hoy = {30, 9, 2025, 273, "Septiembre"};
    printf("Dia: %d\n", hoy.dia);
    printf("Mes: %d\n", hoy.mes);   
    printf("Anio: %d\n", hoy.anio);
    printf("Dia del año: %d\n", hoy.dia_del_anio); 
    printf("Nombre del mes: %s\n", hoy.nombre_mes);
    return 0;
}