#include <stdio.h>
#include "fenster.h"
/*
Para compilar debe hacerlo de la siguiente manera:

En Linux
cc nombre_pgm.c -lX11 -lasound -o nombre_pgm && ./nombre_pgm
# macOS
cc nombre_pgm.c -framework Cocoa -framework AudioToolbox -o nombre_pgm && ./nombre_pgm
# windows
cc nombre_pgm.c -lgdi32 -lwinmm -o nombre_pgm.exe && nombre_pgm.exe
*/

int main(){
    FILE *ent, *sal;
    char magica[5];
    char comen[100];
    int ancho, alto, grises, pixel, i, j, cont = 0;
    unsigned int pixeles[800][800];
    ent = fopen("Cartagena.pgm", "r");
    sal = fopen("Cartagena_binaria.pgm", "w"); 
    fgets(magica, 5, ent);
    fprintf(sal, "%s", magica);
    fgets(comen, 100, ent);
    fprintf(sal, "%s", comen);

    fscanf(ent, "%d", &ancho);
    fscanf(ent, "%d", &alto);
    fscanf(ent, "%d", &grises);   
    fprintf(sal, "%d %d\n%d\n", ancho, alto, grises); 
    for (i = 0; i < alto; i++){
        for (j = 0; j < ancho; j++){
            fscanf(ent, "%d", &pixel);
            if (pixel < 180){
                pixel = 0;
            }
            else{
                pixel = 255;
            }
            fprintf(sal, "%d\n", pixel);
            pixeles[i][j] = pixel;
        }
    }

    uint32_t buf[ancho * alto];
    struct fenster f = { .title = "Mas clara", .width = ancho, .height = alto, .buf = buf };
    fenster_open(&f);
    while (fenster_loop(&f) == 0) {
        i = 0;
        while (i < alto){
            j = 0;
            while (j < ancho){
                //fenster_pixel(&f, j, i) = pixeles[i][j];
                fenster_pixel(&f, j, i) = pixeles[i][j];
                j++;
            }
            i++;
        }  
    }
    fenster_close(&f);
    fclose(ent);
    fclose(sal);
    return 0;
}